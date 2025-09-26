#include <stdio.h>
#include <stdlib.h>
int main() {
    FILE* fptr1,*fptr2;

    //fptr1 = fopen("file.txt", "r");
    fptr2=fopen("file.txt","w");
    if (fptr2 == NULL)
        printf("file.txt is not opened.");
    else
        printf("file.txt is Opened Successfully.\n");

    //entering data using fprint
    fprintf(fptr2, "Name:%s\tAge:%d", "Vidhya",25);
    printf("Data was entered inside the file using fprintf.\n");

    //entering character using fputc
    fputc('A',fptr2);
    printf("Character entered into file using using fputc.\n");

    int arr[3]={11,12,13};
    int len = sizeof(arr)/sizeof(arr[0]);
    //fptr2=fopen("file.txt","wb");// It's not in human readable format
    //fwrite(arr, sizeof(int),len,fptr2);

    //printing using outs
    fputs("Printing using puts",fptr2);
    printf("Data entered to file using fputs.");

    //reading elements using fscanf
    int a, b, c;
    fscanf(fptr2, "%d %d %d", &a, &b, &c);
    printf("Read numbers: %d %d %d\n", a, b, c);

    //reading elements from fgetc
    int ch;
    while((ch=fgetc(fptr2))!=EOF)
    {
        putchar(ch);
    }

    //using fgets
    char buffer[10];
    fgets(buffer, sizeof(buffer),fptr2);
    printf("%s", buffer);

    //fread
    fread(arr, sizeof(int),3,fptr2);
    for(int i=0;i<3;i++)
    {
        printf("%d ",arr[i]);
    }
    fclose(fptr2);
     //if (fptr2 == NULL)
        //printf("subbu.txt is not opened.");
    //else
        //printf("subbu.txt is Opened Successfully.\n");
   
    return 0;
}