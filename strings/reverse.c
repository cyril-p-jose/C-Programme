#include <stdio.h>

int main()
{
    char str[100], rev[100];
    int i = 0, length = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    // Find length manually
    while (str[length] != '\0')
    {
        length++;
    }

    // Reverse string
    for (i = 0; i < length; i++)
    {
        rev[i] = str[length - i - 1];
    }

    rev[length] = '\0';   // Add null character

    printf("Reversed string: %s\n", rev);

    return 0;
}
