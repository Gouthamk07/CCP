#include<stdio.h>
#include<conio.h>
int main()
{
float f,c;
clrscr();
printf("\n Enter temperature in f:");
scanf(" %f", &f);
c=(0.56)*(f-32);
printf("\n The temperature in c is: %.2f", c);
getche();
return 0;
}

