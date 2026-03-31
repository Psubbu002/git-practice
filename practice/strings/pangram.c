#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX 200
int is_pangram(char str[]) 
{
    int alpha[26] = {0};
    for(int i=0; str[i]; i++) 
    {
        if(isalpha(str[i])) 
        {
            alpha[tolower(str[i]) - 'a'] = 1;
        }
    }
    for(int i=0;i<26;i++)
    {
        if(alpha[i]==0) 
            return 0;
    }
    return 1;
}

void print_words_by_length(char str[], int findSmallest) 
{
    char copy[MAX];
    strcpy(copy,str);
    int minLen = 1000, maxLen=0;
    char *word;
    word = strtok(copy," ,.-");
    while(word != NULL) 
    {
        int len = strlen(word);
        if(len < minLen) minLen = len;
        if(len > maxLen) maxLen = len;
        word = strtok(NULL," ,.-");
    }

    strcpy(copy,str);
    word = strtok(copy," ,.-");
    if(findSmallest) 
    {
        printf("Smallest word(s): ");
        while(word!=NULL)
        {
            if(strlen(word)==minLen) 
                printf("%s ", word);
            word = strtok(NULL," ,.-");
        }
    } 
    else {
        printf("Longest word(s): ");
        while(word!=NULL)
        {
            if(strlen(word)==maxLen) 
                printf("%s ", word);
            word = strtok(NULL," ,.-");
        }
    }
    printf("\n");
}

void print_words_both_sides(char str[]) 
{
    char copy[MAX];
    strcpy(copy,str);
    char *words[100];
    int count = 0;
    char *word = strtok(copy," ,.-");
    while(word != NULL) 
    {
        words[count++] = word;
        word = strtok(NULL," ,.-");
    }

    printf("Words from both sides: ");
    int i=0,j=count-1;
    while(i<=j)
    {
        if(i==j) 
            printf("%s ", words[i]);
        else 
            printf("%s %s ", words[i], words[j]);
        i++; j--;
    }
    printf("\n");
}

int main(void) 
{
    char str[MAX];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str,"\n")] = '\0'; 

    print_words_by_length(str,1);

    print_words_by_length(str,0);

    print_words_both_sides(str);

    printf("Is pangram: %s\n", is_pangram(str)?"Yes":"No");
    return 0;
}