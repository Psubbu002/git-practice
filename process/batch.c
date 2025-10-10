#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#define NUM_JOBS 5
void run_job(int job_number) 
{
    printf("Starting job %d...\n", job_number);
    // Simulate some processing with sleep
    sleep(3);
    printf("Job %d completed.\n", job_number);
}
int main() 
{
    printf("Batch process started. Running %d jobs sequentially.\n", NUM_JOBS);
    for (int i = 1; i <= NUM_JOBS; i++) 
    {
        run_job(i);
    }
    printf("Batch process finished all jobs.\n");
    return 0;
}