#include<stdio.h>
#include<string.h>
int main(){
    char greet[]="cisco1";
    char greet1[]={'c','i','s','c','o','\0'};
    char greeting[10];
    printf("%s\n",greet);
    printf("%s\n",greet1);
    int res=strcmp(greet1,greet);
    int res1=strncmp(greet1,greet,5);
    if(res==0)
        printf("Same\n");
    else
        printf("not same\n");
    char *res2=strchr(greet,'s');//first occurence
    if (res2 != NULL)
        printf("Character found at: %ld index\n", res2 - greet);
    else
        printf("Character not found\n");
    char *res3=strrchr(greet,'c');//last occurence
    if (res2 != NULL)
        printf("Character found at: %ld index\n", res3 - greet);
    else
        printf("Character not found\n");
    char s[] = "Hello, Geeks!";
    char *pos = strstr(s, "Geeks");
    if (pos != NULL)
        printf("Found\n"); 
    else
        printf("Not Found\n");
    char s1[50];
    int n = 10;  
    sprintf(s1, "The value is %d\n", n);// Output formatted string into string bugger s1
    printf("%s", s1);
    char s2[] = "Hello, Geeks, C!";
    char *t = strtok(s2, ", ");//splits string into tokens
    while (t != NULL) {
        printf("%s\n", t);
        t = strtok(NULL, ", ");
    }
    printf("%d\n",strlen(greet));
    printf("%d\n",sizeof(greet));
    printf("%s\n",strncat(greet,greet1,2));
    printf("%s\n",strcat(greet,greet1));
    printf("%s\n",strcpy(greeting,greet));
    return 0;
}
