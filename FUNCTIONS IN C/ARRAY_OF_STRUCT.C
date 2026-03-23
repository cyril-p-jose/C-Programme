#include <stdio.h>

struct student
{
    char name[50];
    int roll;
    int m1, m2, m3;
};

int main()
{
    struct student s[100];
    int i, n, total;
    float avg;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nEnter student %d details\n", i+1);

        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Roll number: ");
        scanf("%d", &s[i].roll);

        printf("Marks in 3 subjects: ");
        scanf("%d %d %d", &s[i].m1, &s[i].m2, &s[i].m3);
    }

    printf("\nStudent Results\n");

    for(i = 0; i < n; i++)
    {
        total = s[i].m1 + s[i].m2 + s[i].m3;
        avg = total / 3.0;

        printf("\nName: %s", s[i].name);
        printf("\nRoll: %d", s[i].roll);
        printf("\nTotal: %d", total);
        printf("\nAverage: %.2f\n", avg);
    }

    return 0;
}
