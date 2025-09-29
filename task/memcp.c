#include <stdio.h>
#include <string.h>
void *my_memcpy(void *dest, const void *src, size_t n) 
{
    char *d = (char *)dest;
    const char *s = (const char *)src;
    for (size_t i = 0; i < n; i++) 
    {
        d[i] = s[i];
    }
    return dest;
}
int main() 
{
    char src[50];
    char dest[50];
    printf("Enter a string :");
    scanf("%s",&src);
    printf("the copied stirng is :%s\n",memcpy(dest,src,3));
    my_memcpy(dest,src, strlen(src)+1);
    printf("the copied string using UDF:%s\n",dest);
    return 0;
}
