#include <stdio.h>
int main() 
{
  char str[30], ch;
  int ind[10], j;
  printf("Enter string: ");		//hello
  scanf("%[^\n]s", str);
  printf("Enter character: ");	//o
  getchar();
  ch = getchar();
  j = 0;
  for (int i = 0; str[i] != '\0'; i++) {
    if (str[i] == ch)
      ind[j++] = i;
  }
  printf("Input string is: %s\n", str);	 //prints "Input string: hello"
  printf("Indexes: ");			//prints "Indexs:4"
  for (int i = 0; i < j; i++)
    printf("%d \t", ind[i]);
  return 0;
}