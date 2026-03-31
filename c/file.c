#include <stdio.h>
#include <stdlib.h>
struct student {
    char name[20];
    int roll;
    int marks;
};

int main(void)
{
    FILE *fp; 
    int ch;
    int n,a;
    char str[80],old[20],new[20];
    struct student std;
    if((fp=fopen("text.txt","w"))==NULL)    
    {
        printf("Eroor in opening file\n");
        exit(1);
    }
    printf("enter text:\n");
    while((ch=getchar())!=EOF)
    {
        fputc(ch,fp);   
    }
   
    while(ch=getc(fp)!=EOF)
    {
        printf("%c",ch);
    }
    if(feof(fp))
    {
        printf("End of file");
    }
    if(ferror(fp))
    {
        printf("Error");
        clearerr(fp);
    }

    printf("Enter name of the file to be renamed:");
    gets(old);
    printf("Enter a new name for the file:\n");
    gets(new);
    if(rename(old,new)==0)
    {
        printf("file name is renameed to %s\n",new);
    }
    else{
        printf("error");
    }
    
    ch=fgetc(fp);
    while(ch!=EOF)
    {
        printf("%c",ch);
        ch=fgetc(fp);   
    }
    
    printf("To stop entering ,press ctrl+d/ctrl+z\n");
    printf("Enter text:\n");
    while(gets(str)!=NULL)     
    {
        strcat(str,"\n");   //without this the text concatinate 
        fputs(str,fp);
    }
    
    while(fgets(str,3,fp)!=NULL)       //3(0-2) indicated number characters it read
    {
        puts(str);
    }
  
    printf("Enter number of records:\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("Enter the name:");
        scanf("%19s",std.name);
        printf("enter marks:");
        scanf("%f",&std.marks);
        fprintf(fp,"%s %f\n",std.name,std.marks);
    }
    rewind(fp);
    printf("Name\tMarks:\n");
    while(fscanf(fp,"%19s %f",std.name,&std.marks)==2)
    {
        printf("%s\t%.2f\n",std.name,std.marks);
    }
   
    
    printf("Name\tRoll\tMarks\n");
    while(fread(&std,sizeof(std),1,fp)==1)
    {
        printf("%s\t%d\t%d\n",std.name,std.roll,std.marks);
    }

    printf("Enter the record number to read to read:");
    scanf("%d",&a);
    fseek(fp,(a-1)*sizeof(std),0);
    fread(&std,sizeof(std),1,fp);
    printf("%19s\t%d\t%d\n",std.name,std.roll,std.marks);

    printf("Enter number of records:\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("Enter name:");
        scanf("%19s",std.name);
        printf("Roll:");
        scanf("%d",&std.roll);
        printf("Marks:");
        scanf("%d",&std.marks);
        fwrite(&std,sizeof(std),1,fp);
    }
   rewind(fp);
   printf("position indicator in the beginning  - > %d\n",ftell(fp));
    while(fread(&std,sizeof(std),1,fp)==1)
    {
        printf("position indicator  - > %d\n",ftell(fp));
         printf("%19s\t%d\t%d\n",std.name,std.roll,std.marks);
    }

    printf("%d\n",ftell(fp)); 
    fread(&std,sizeof(std),1,fp); 
    while(!feof(fp))
    {
        //fread(&std,sizeof(std),1,fp);   //printfs last record twice
        printf("%19s\t%d\t%d\n",std.name,std.roll,std.marks);
        fread(&std,sizeof(std),1,fp); 
    }
    fclose(fp);
    return 0;
}