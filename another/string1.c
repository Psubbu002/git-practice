#include <stdio.h>
#include <string.h>
#include <ctype.h>
int countWords(char *);
int countVowels(char *);
int isPalindrome(char *);
void deleteChar(char *, char);
void removeExtraSpaces(char *);
void deleteDuplicates(char *);
void sortString(char *);
void reverseWords(char *);
void mergeStrings(char *, char *, char *)
int countWords(char *str) {
    int count = 0, inWord = 0;
    while (*str) {
        if (!isspace(*str) && inWord == 0) {
            inWord = 1;
            count++;
        } else if (isspace(*str)) {
            inWord = 0;
        }
        str++;
    }
    return count;
}
int countVowels(char *str) {
    int count = 0;
    while (*str) {
        char c = tolower(*str);
        if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
            count++;
        str++;
    }
    return count;
}
int isPalindrome(char *str) {
    int left = 0, right = strlen(str) - 1;
    while (left < right) {
        while (left < right && !isalnum(str[left])) left++;
        while (left < right && !isalnum(str[right])) right--;
        if (tolower(str[left]) != tolower(str[right]))
            return 0;
        left++;
        right--;
    }
    return 1;
}
void deleteChar(char *str, char ch) {
    int i, j = 0;
    for (i = 0; str[i]; i++) {
        if (str[i] != ch)
            str[j++] = str[i];
    }
    str[j] = '\0';
}
void removeExtraSpaces(char *str) {
    int i = 0, j = 0;
    int space = 0;
    while (isspace(str[i])) i++; 
    for (; str[i]; i++) {
        if (!isspace(str[i])) {
            str[j++] = str[i];
            space = 0;
        } else if (!space) {
            str[j++] = ' ';
            space = 1;
        }
    }
    if (j > 0 && str[j-1] == ' ') j--; 
    str[j] = '\0';
}
void deleteDuplicates(char *str) {
    int hash[256] = {0};
    int i, j = 0;
    for (i = 0; str[i]; i++) {
        if (!hash[(unsigned char)str[i]]) {
            hash[(unsigned char)str[i]] = 1;
            str[j++] = str[i];
        }
    }
    str[j] = '\0';
}
void sortString(char *str) {
    int len = strlen(str);
    for (int i = 0; i < len-1; i++) {
        for (int j = i+1; j < len; j++) {
            if (str[i] > str[j]) {
                char temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
}
void reverse(char *start, char *end) {
    while (start < end) {
        char temp = *start;
        *start++ = *end;
        *end-- = temp;
    }
}
void reverseWords(char *str) {
    char *word_start = NULL;
    char *temp = str;
    while (*temp) {
        if ((word_start == NULL) && !isspace(*temp)) {
            word_start = temp;  
        }
        if (word_start && (isspace(*(temp + 1)) || *(temp + 1) == '\0')) {
            reverse(word_start, temp);  
            word_start = NULL;          
        }
        temp++;
    }
}
void reversewhole(char *str) {
    char *word_start = NULL;
    char *temp = str;
    while (*temp) {
        if ((word_start == NULL) && !isspace(*temp)) {
            word_start = temp;
        }
        if (word_start && (isspace(*(temp+1)) || *(temp+1) == '\0')) {
            reverse(word_start, temp);
            word_start = NULL;
        }
        temp++;
    }
    reverse(str, temp - 1); 
}
void mergeStrings(char *str1, char *str2, char *result) {
    strcpy(result, str1);
    strcat(result, " ");
    strcat(result, str2);
}
void countDuplicateCharacters(char *str) {
    int freq[256] = {0};
    int i;
    int found = 0;
    for (i = 0; str[i]; i++) {
        unsigned char ch = (unsigned char)str[i];
        freq[ch]++;
    }
    printf("Duplicate characters:\n");
    for (i = 0; i < 256; i++) {
        if (freq[i] > 1 && isprint(i)) {
            printf("'%c' occurs %d times\n", i, freq[i]);
            found = 1;
        }
    }
    if (!found) {
        printf("No duplicate characters found.\n");
    }
}
int main() {
    char str1[1000], str2[1000], merged[2000];
    int choice;
    char ch;
    printf("Enter a string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = 0;  
    printf("\tMenu\n");
    printf("1.count number of words in string\n");
    printf("2.count vowels in string\n");
    printf("3.check string is palindrome or not\n");
    printf("4.delete desired character\n");
    printf("5.remove conjunctive spaces in string\n");
    printf("6.delete duplicate character in string\n");
    printf("7.sort string in any order\n");
    printf("8.reverse all words in string\n");
    printf("19.merge 2 string to another string\n");
    printf("10. Count duplicate characters\n");
    printf("11.Reverse the words in the string\n");
    do
    {
        printf("Enter your choice:");
        scanf("%d",&choice);
        getchar();
        switch(choice) {
            case 1:
                printf("Word count: %d\n", countWords(str1));
                break;
            case 2:
                printf("Vowel count: %d\n", countVowels(str1));
                break;
            case 3:
                if(isPalindrome(str1))
                    printf("The string is a palindrome.\n");
                else
                    printf("The string is not a palindrome.\n");
                break;
            case 4:
                printf("Enter character to delete: ");
                scanf("%c", &ch);
                deleteChar(str1, ch);
                printf("Updated string: %s\n", str1);
                break;
            case 5:
                removeExtraSpaces(str1);
                printf("Updated string: %s\n", str1);
                break;
            case 6:
                deleteDuplicates(str1);
                printf("Updated string: %s\n", str1);
                break;
            case 7:
                sortString(str1);
                printf("Sorted string: %s\n", str1);
                break;
            case 8:
                reverseWords(str1);
                printf("Reversed  string: %s\n", str1);
                break;
            case 9:
                printf("Enter second string to merge: ");
                fgets(str2, sizeof(str2), stdin);
                str2[strcspn(str2, "\n")] = 0;
                mergeStrings(str1, str2, merged);
                printf("Merged string: %s\n", merged);
                break;
            case 10:
            countDuplicateCharacters(str1);
            break;
            case 11:
                reversewhole(str1);
                printf("Reversed words string: %s\n", str1);
                break;
            case 0:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice. Try again.\n");
        }
    } while (choice!=0);
    return 0;
}
