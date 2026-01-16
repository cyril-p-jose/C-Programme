//Write a program to find the average of three number.


#include<stdio.h>

#include<conio.h>

void main()

{

int a,b,c;

float avg;

printf("enter three numbers");

scanf("%d%d%d",&a,&b,&c);

avg=a+b+c/3.0;

printf("average is %f",avg);

}
