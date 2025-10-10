#include <stdio.h>
#include <dirent.h>
#include <string.h>
#include <stdlib.h>
#define STAT_PATH_LEN 256
// Function to check if a string is all digits (process directories)
int is_digits(const char *str) 
{
    while (*str) 
    {
        if (*str < '0' || *str > '9')
            return 0;
        str++;
    }
    return 1;
}
int main() 
{
    DIR *proc = opendir("/proc");
    struct dirent *entry;
    if (!proc) 
    {
        perror("opendir /proc");
        return 1;
    }
    printf("%-8s %-8s %-8s %-6s %s\n", "PID", "PPID", "TTY", "STATE", "CMD");
    while ((entry = readdir(proc)) != NULL) 
    {
        if (!is_digits(entry->d_name))
            continue;
        int pid = atoi(entry->d_name);
        
        char stat_path[STAT_PATH_LEN];
        snprintf(stat_path, STAT_PATH_LEN, "/proc/%d/stat", pid);
        FILE *stat_file = fopen(stat_path, "r");
        if (!stat_file)
            continue;
        // Variables per proc man page for /proc/[pid]/stat
        int ppid, pgrp, session, tty_nr;
        long int dummy;
        char comm[256], state;
       fscanf(stat_file, "%*d (%255[^)]) %c %d %d %d %d %d",comm, &state, &ppid, &pgrp, &session, &tty_nr, &dummy);
        fclose(stat_file);
        // If tty_nr == 0 means no controlling terminal
        char tty[16] = "?";
        if (ttynum != 0) 
        {
            snprintf(tty, sizeof(tty), "yes");
        }
        // Print details
        printf("%-8d %-8d %-8s %-6c %s\n", pid, ppid, tty, state, comm);
    }
    closedir(proc);
    return 0;
}
