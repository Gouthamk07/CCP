#include<stdio.h>
#include<conio.h>
int main()
{
float f, c;
clrscr();
printf("\nEnter the temperature in f:");
scanf("%f", &f);
c = (0.56)*(f-32);
printf("\nthe temperature in degree celsius is %.2f", c);
getche();
return 0;
}