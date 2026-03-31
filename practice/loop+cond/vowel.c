//Check if a character is a vowel or not
#include <stdio.h>
#include <ctype.h>
int main(void)
{
    char a;
    printf("Enter a character:");
    scanf("%c",&a);
    a=tolower(a);
    if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u') 
    {
        printf("Vowel\n");
    }
    else if ((a >= 'a' && a <= 'z')) 
    {
        printf("Consonant\n");
    }
    else
    {
        printf("Not an Alphabet\n");
    }
    return 0;
}