#include <stdio.h>

int x = 10;   // global variable (extern)

void demo()
{
    auto int a = 5;
    static int b = 0;
    register int i;

    b++;

    printf("\nAuto variable a = %d", a);
    printf("\nStatic variable b = %d", b);

    printf("\nRegister variable i values: ");
    for(i = 0; i < 3; i++)
    {
        printf("%d ", i);
    }
}

int main()
{
    extern int x;

    printf("Extern variable x = %d\n", x);

    demo();
    demo();
    demo();

    return 0;
}
