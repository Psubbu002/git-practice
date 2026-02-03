#include <stdio.h>
#include <string.h>
int main(void)
{
 
    int i=0;
    char name[10]={'m','o','h','i','n','i','\0'};
    while(name[i])
    {
        putchar(name[i++]); //mohini
    }

    char *str;  // char *str[10];
    printf("enter\n");
    gets(str);  //error
    printf("string %s\n",str);

    char *str1="good", *str2="morning"; //error " char *str[10]="good",*str2[]="morning"; 
    strcat(str1,str2);
    printf("%s\n",str1);

    char str[10]="how";
    strcat(str,'?');    //error "strcat(str,"?");"
    printf("%s\n",str); 

 char str1[]="deep";
   char str2[]={'d','e','e','p'};
   if(strcmp(str1,str2)==0)
   {
       printf("same");
   }
   else
   {
       printf("nt");
   }
      
       char *str[10];
  int i;
  for(i=0;i<10;i++)
  {
      scanf("%s",str[i]);
  }
  for(i=0;i<10;i++)
  {
      printf("%s\n",str[i]);
  }
    
    int marks;
 char name[50];
 printf("enter marks");
 scanf("%d",&marks);
 printf("enter name:");
 gets(name);
 puts(name);
    return 0;
}