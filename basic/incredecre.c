#include <stdio.h>
int main() {
    int i;
    printf("Enter a number:");
    scanf("%d",&i);		//"enter a number:5"
    i++;
    printf("%d\n",i);	//print "6"
    ++i;
    printf("%d\n",i);	//print "7"
    i=i++;
    printf(" post increment:%d\n",i);	//prints " post increment:7"
    i=++i;
    printf(" pre increment:%d\n",i);   	//prints "pre increment:8" 
    return 0;
}