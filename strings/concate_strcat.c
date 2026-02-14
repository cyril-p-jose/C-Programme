#include <stdio.h>
#include <string.h>   // Required for strcat()

int main()
{
    char str1[100], str2[100];

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    strcat(str1, str2);   // Concatenate str2 to str1

    printf("Concatenated string: %s\n", str1);

    return 0;
}
