#include <stdio.h>

struct sample
{
    int a;
    float b;
    char c;
};

union test
{
    int a;
    float b;
    char c;
};

int main()
{
    struct sample s;
    union test u;

    printf("Size of structure: %lu bytes\n", sizeof(s));
    printf("Size of union: %lu bytes\n", sizeof(u));

    return 0;
}
