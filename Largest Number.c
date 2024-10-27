//Program to print largest number among three number using if else statement in c
#include<stdio.h>

int main()
{
 int a=3,b=5,c=8;
 printf("Largest Number is:");

if(a>b && a>c)
 printf("%d",a);

else if(b>a && b>c)
  printf("%d",b);

else
 printf("%d",c);

return 0;
}
