// program to find largest among three no using nested if statement


#include<stdio.h>

void main()
{
int a,b,c,z;
printf("enter three numbers");
scanf("%d%d%d",&a,&b,&c);

if(a>b) {

if(a>c)
z=a;

else
z=c;
}

else
{
if(b>c)
z=b;

else
z=c;
}

printf("greater number is %d",z);
}
