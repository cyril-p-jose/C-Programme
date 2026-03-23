#include <stdio.h>

struct Student {
    int roll;
    float marks;
};

int main() {

    struct Student s[100];
    int n, i;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("\nEnter details of student %d\n", i + 1);

        printf("Roll number: ");
        scanf("%d", &s[i].roll);

        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }

    printf("\nStudent Details:\n");

    for(i = 0; i < n; i++) {
        printf("Roll = %d  Marks = %.2f\n", s[i].roll, s[i].marks);
    }

    return 0;
}
