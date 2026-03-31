//Palindrome or not
//reverse a number
#include <stdio.h>
int main(void)
{
    int num, rem, rev = 0,temp;;
    printf("Enter the number: ");
    scanf("%d", &num);
    temp=num;
    while (num != 0)
    {
        rem = num % 10;          
        rev = rev * 10 + rem;   
        num = num / 10;         
    }
    if(temp==rev){
        printf("palindrome\n");
    }
    else{
        printf("not\n");
    }
    return 0;
}