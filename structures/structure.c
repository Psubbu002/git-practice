#include <stdio.h>
#include <string.h>
struct Books 
{
   char title[50];
   char author[50];
   char subject[100];
   int  book_id;
};
void printBook(struct Books b[], int count);
int main() 
{
   int n;
   printf("Enter the number of books: ");
   scanf("%d", &n);
   struct Books b[n];  
   for(int i = 0; i < n; i++) 
   {
       printf("Enter the book %d details\n", i + 1);
       printf("Title: ");
       scanf("%s", b[i].title);
       printf("Author: ");
       scanf("%s", b[i].author);
       printf("Subject: ");
       scanf("%s", b[i].subject);
       printf("ID: ");
       scanf("%d", &b[i].book_id);
   }
   printBook(b, n);  
   return 0;
}
void printBook(struct Books b[], int count) 
{
   printf("\nThe book details:\n");
   for(int i = 0; i < count; i++) 
   {
       printf("%s %s %s %d\n", b[i].title, b[i].author, b[i].subject, b[i].book_id);
   }
}