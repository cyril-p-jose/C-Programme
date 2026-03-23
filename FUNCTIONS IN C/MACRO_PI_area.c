#include <stdio.h>

#define PI 3.14159

int main()
{
    float r, h, circleArea, cylinderArea;

    printf("Enter radius: ");
    scanf("%f", &r);

    printf("Enter height: ");
    scanf("%f", &h);

    circleArea = PI * r * r;
    cylinderArea = 2 * PI * r * (r + h);

    printf("Area of Circle = %.2f\n", circleArea);
    printf("Surface Area of Cylinder = %.2f\n", cylinderArea);

    return 0;
}
