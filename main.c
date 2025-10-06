// strstr function example
// this function searches string from another string

#include <stdio.h>
#include <string.h>
int main(void)
{
    
    char str1[] = "every dog has his day";
    char  str2[] = "dog";
    char *pointer = NULL;
    pointer = strstr(str1, str2);
    printf(" %c\n", *pointer);
    return 0;
}
