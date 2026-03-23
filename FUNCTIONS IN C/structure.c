#include <stdio.h>

struct employee
{
    char name[50];
    int id;
    float salary;
};

int main()
{
    struct employee emp[100];
    int i, n;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nEnter details of employee %d\n", i+1);

        printf("Name: ");
        scanf("%s", emp[i].name);

        printf("ID: ");
        scanf("%d", &emp[i].id);

        printf("Salary: ");
        scanf("%f", &emp[i].salary);
    }

    printf("\nEmployee Details\n");

    for(i = 0; i < n; i++)
    {
        printf("\nName: %s", emp[i].name);
        printf("\nID: %d", emp[i].id);
        printf("\nSalary: %.2f\n", emp[i].salary);
    }

    return 0;
}
