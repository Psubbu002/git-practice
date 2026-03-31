#include <stdio.h>
#include <string.h>
#include <ctype.h>
void print_using_loop(char str[]) 
{
    printf("Using loop: ");
    for(int i=0; str[i]; i++) 
    {
        putchar(str[i]);
    }
    printf("\n");
}

void print_using_function(char str[]) 
{
    printf("Using function: %s\n", str);
}

void reverse_string(char str[]) 
{
    int len = strlen(str);
    printf("Reversed string: ");
    for(int i=len-1; i>=0; i--) 
    {
        putchar(str[i]);
    }
    printf("\n");
}

int count_vowels(char str[]) 
{
    int count=0;
    for(int i=0; str[i]; i++) 
    {
        char ch = tolower(str[i]);
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u') 
            count++;
    }
    return count;
}

int is_palindrome(char str[]) 
{
    int len=strlen(str);
    for(int i=0;i<len/2;i++)
    {
        if(str[i]!=str[len-1-i]) 
            return 0;
    }
    return 1;
}

int is_unique(char str[]) 
{
    int freq[256]={0};
    for(int i=0;str[i];i++) 
    {
        if(freq[(unsigned char)str[i]]) 
            return 0;
        freq[(unsigned char)str[i]]++;
    }
    return 1;
}

void remove_extra_spaces(char str[]) 
{
    int i=0,j=0;
    while(str[i]) 
    {
        if(!(str[i]==' ' && str[i+1]==' ')) 
            str[j++]=str[i];
        i++;
    }
    str[j]='\0';
}

void remove_duplicates(char str[]) 
{
    int freq[256]={0}, j=0;
    for(int i=0; str[i]; i++)
    {
        if(!freq[(unsigned char)str[i]])
        {
            str[j++] = str[i];
            freq[(unsigned char)str[i]]=1;
        }
    }
    str[j]='\0';
}

int is_c_file(char str[]) 
{
    int len=strlen(str);
    return (len>2 && strcmp(&str[len-2], ".c")==0);
}

void remove_chars(char str1[], char str2[]) 
{
    int freq[256]={0}, j=0;
    for(int i=0; str2[i]; i++) 
    {
        freq[(unsigned char)str2[i]]=1;
    }
    for(int i=0; str1[i]; i++)
    {
        if(!freq[(unsigned char)str1[i]]) 
            str1[j++]=str1[i];
    }
    str1[j]='\0';
}

void char_frequency(char str[]) 
{
    int freq[256]={0};
    for(int i=0; str[i]; i++) 
    {
        freq[(unsigned char)str[i]]++;
    }
    printf("Character frequencies:\n");
    for(int i=0;i<256;i++)
    {
        if(freq[i]>0) 
            printf("%c: %d\n", i, freq[i]);
    }
}

void repeated_characters(char str[]) 
{
    int freq[256]={0};
    for(int i=0; str[i]; i++) 
    {
        freq[(unsigned char)str[i]]++;
    }
    printf("Repeated characters: ");
    for(int i=0;i<256;i++)
    {
        if(freq[i]>1) 
            printf("%c ", i);
    }
    printf("\n");
}

void reverse_each_word(char str[]) 
{
    int start=0,end,len=strlen(str);
    for(int i=0;i<=len;i++)
    {
        if(str[i]==' '||str[i]=='\0')
        {
            end=i-1;
            while(start<end)
            {
                char temp=str[start];
                str[start]=str[end];
                str[end]=temp;
                start++; end--;
            }
            start=i+1;
        }
    }
}

int main(void) 
{
    char str[200], str2[100], filename[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")]='\0';

    printf("\n--- String Operations ---\n");
    print_using_loop(str);
    print_using_function(str);
    reverse_string(str);
    printf("Number of vowels: %d\n", count_vowels(str));
    printf("Is palindrome: %s\n", is_palindrome(str)?"Yes":"No");
    printf("Is unique: %s\n", is_unique(str)?"Yes":"No");

    remove_extra_spaces(str);
    printf("After removing extra spaces: %s\n", str);

    remove_duplicates(str);
    printf("After removing duplicates: %s\n", str);

    printf("Enter a file name to validate (.c): ");
    fgets(filename, sizeof(filename), stdin);
    filename[strcspn(filename,"\n")]='\0';
    printf("Is .c file: %s\n", is_c_file(filename)?"Yes":"No");

    printf("Enter second string to remove from first: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2,"\n")]='\0';
    remove_chars(str, str2);
    printf("After removing second string chars: %s\n", str);

    char_frequency(str);
    repeated_characters(str);

    printf("Enter string to reverse each word: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str,"\n")]='\0';
    reverse_each_word(str);
    printf("After reversing each word: %s\n", str);
    return 0;
}