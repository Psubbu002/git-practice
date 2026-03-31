#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 1024
void printFile(char *filename) 
{
    FILE *fp = fopen(filename, "r");
    if (!fp) 
    { 
        printf("Unable to open file.\n"); 
        return; 
    }
    char ch;
    while ((ch = fgetc(fp)) != EOF) 
        putchar(ch);
    fclose(fp);
}

void copyFile(char *source, char *dest) 
{
    FILE *src = fopen(source, "r");
    FILE *dst = fopen(dest, "w");
    if (!src || !dst) 
    { 
        printf("Error opening files.\n"); 
        return; 
    }
    char ch;
    while ((ch = fgetc(src)) != EOF) 
        fputc(ch, dst);
    fclose(src); 
    fclose(dst);
}

void printReverse(char *filename) 
{
    FILE *fp = fopen(filename, "r");
    if (!fp) 
    { 
        printf("Unable to open file.\n"); 
        return; 
    }
    fseek(fp, 0, SEEK_END);
    long size = ftell(fp);
    for (long i = size-1; i >= 0; i--) 
    {
        fseek(fp, i, SEEK_SET);
        putchar(fgetc(fp));
    }
    fclose(fp);
}

void fileSize(char *filename) 
{
    FILE *fp = fopen(filename, "r");
    if (!fp) 
    { 
        printf("Unable to open file.\n"); 
        return; 
    }
    fseek(fp, 0, SEEK_END);
    printf("File size: %ld bytes\n", ftell(fp));
    fclose(fp);
}

void countWords(char *filename) 
{
    FILE *fp = fopen(filename, "r");
    if (!fp) 
    { 
        printf("Unable to open file.\n");
         return; 
        }
    int count = 0; 
    char word[MAX];
    while (fscanf(fp, "%s", word) != EOF) 
        count++;
    printf("Number of words: %d\n", count);
    fclose(fp);
}

void countLines(char *filename) 
{
    FILE *fp = fopen(filename, "r");
    if (!fp) 
    { 
        printf("Unable to open file.\n"); 
        return; 
    }
    int count = 0; 
    char line[MAX];
    while (fgets(line, sizeof(line), fp)) 
        count++;
    printf("Number of lines: %d\n", count);
    fclose(fp);
}

void printNthLine(char *filename, int n) 
{
    FILE *fp = fopen(filename, "r");
    if (!fp) 
    { 
        printf("Unable to open file.\n"); 
        return; 
    }
    char line[MAX]; 
    int count = 1;
    while (fgets(line, sizeof(line), fp)) 
    {
        if (count == n) 
        { 
            printf("%s\n", line); 
            fclose(fp); 
            return; 
        }
        count++;
    }
    printf("Line %d not found.\n", n);
    fclose(fp);
}

void printLastLine(char *filename) 
{
    FILE *fp = fopen(filename, "r");
    if (!fp) 
    { 
        printf("Unable to open file.\n"); 
        return; 
    }
    char line[MAX]; 
    char last[MAX]; 
    last[0]='\0';
    while (fgets(line, sizeof(line), fp)) 
        strcpy(last, line);
    printf("Last line: %s\n", last);
    fclose(fp);
}

void storeIntegers(char *filename, int n) 
{
    FILE *fp = fopen(filename, "w");
    if (!fp) 
    { 
        printf("Unable to open file.\n"); 
        return; 
    }
    int num;
    for(int i=0;i<n;i++) 
    { 
        printf("Enter integer %d: ", i+1); 
        scanf("%d",&num); fprintf(fp,"%d\n",num);}
    fclose(fp);
}

void storeNames(char *filename, int n) 
{
    FILE *fp = fopen(filename,"w");
    if (!fp) 
    { 
        printf("Unable to open file.\n"); 
        return; 
    }
    char name[MAX]; 
    getchar(); 
    for(int i=0;i<n;i++) 
    {
        printf("Enter name %d: ", i+1);
        fgets(name, MAX, stdin);
        fprintf(fp,"%s",name);
    }
    fclose(fp);
}

void deleteLine(char *filename,int n)
{
    FILE *fp=fopen(filename,"r"); 
    FILE *temp=fopen("temp.txt","w");
    if(!fp || !temp)
    { 
        printf("Error opening file.\n"); 
        return; 
    }
    char line[MAX]; 
    int count=1;
    while(fgets(line,sizeof(line),fp))
    {
        if(count!=n) 
            fputs(line,temp);
        count++;
    }
    fclose(fp); 
    fclose(temp);
    remove(filename); 
    rename("temp.txt",filename);
    printf("Line %d deleted.\n",n);
}

void longestLine(char *filename)
{
    FILE *fp=fopen(filename,"r");
    if(!fp)
    { 
        printf("Unable to open file.\n"); 
        return; 
    }
    char line[MAX]; 
    char longest[MAX]; 
    longest[0]='\0';
    while(fgets(line,sizeof(line),fp))
    {
        if(strlen(line)>strlen(longest)) 
            strcpy(longest,line);
    }
    printf("Longest line: %s\n",longest);
    fclose(fp);
}

void removeComments(char *filename)
{
    FILE *fp=fopen(filename,"r"); 
    FILE *temp=fopen("temp.c","w");
    if(!fp || !temp)
    { 
        printf("Error opening file.\n"); 
        return; 
    }
    char line[MAX];
    while(fgets(line,sizeof(line),fp))
    {
        char *comment=strstr(line,"//");
        if(comment) 
            *comment='\0';
        if(strlen(line)>1) 
            fprintf(temp,"%s\n",line);
    }
    fclose(fp); 
    fclose(temp);
    remove(filename); 
    rename("temp.c",filename);
    printf("Single-line comments removed.\n");
}

int main(void)
{
    int choice,n;
    char filename[100],dest[100];
    while(1)
    {
       
        printf("\n--- File Operations Menu ---\n");
        printf("1.Print file\n2.Copy file\n3.Print reverse\n4.File size\n5.Count words\n6.Count lines\n7.Print nth line\n");
        printf("8.Print last line\n9.Store integers\n10.Store names\n11.Delete nth line\n12.Longest line\n13.Remove comments\n14.Exit\n");
        printf("Enter choice: "); 
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: 
                printf("Enter filename:");
                scanf("%s",filename);
                printFile(filename); 
                break;
            case 2: 
                printf("Enter filename:");
                scanf("%s",filename);
                printf("Enter destination: "); 
                scanf("%s",dest); 
                copyFile(filename,dest); 
                break;
            case 3: 
                printf("Enter filename:");
                scanf("%s",filename);    
                printReverse(filename); 
                break;
            case 4: 
                printf("Enter filename:");
                scanf("%s",filename);
                fileSize(filename); 
                break;
            case 5: 
                printf("Enter filename:");
                scanf("%s",filename);
                countWords(filename); 
                break;
            case 6: 
                printf("Enter filename:");
                scanf("%s",filename);
                countLines(filename); 
                break;
            case 7: 
                printf("Enter filename:");
                scanf("%s",filename);
                printf("Enter line number: "); 
                scanf("%d",&n); 
                printNthLine(filename,n); 
                break;
            case 8: 
                printf("Enter filename:");
                scanf("%s",filename);
                printLastLine(filename); 
                break;
            case 9: 
                printf("Enter filename:");
                scanf("%s",filename);
                printf("Enter number of integers: "); 
                scanf("%d",&n); 
                storeIntegers(filename,n); 
                break;
            case 10: 
                printf("Enter filename:");
                scanf("%s",filename);
                printf("Enter number of names: "); 
                scanf("%d",&n); 
                storeNames(filename,n); 
                break;
            case 11: 
                printf("Enter filename:");
                scanf("%s",filename);
                printf("Enter line number to delete: "); 
                scanf("%d",&n); 
                deleteLine(filename,n); 
                break;
            case 12: 
                printf("Enter filename:");
                scanf("%s",filename);
                longestLine(filename); 
                break;
            case 13: 
                printf("Enter filename:");
                scanf("%s",filename);
                removeComments(filename); 
                break;
            case 14: 
                exit(0);
            default: 
                printf("Invalid choice.\n");
        }
    }
    return 0;
}