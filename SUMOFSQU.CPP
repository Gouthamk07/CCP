//Develop a c program to calculate the sum of the squares of first n odd numbers
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
int i, n;
int sum=0;
clrscr();
printf("\nEnter the value of n:");
scanf("%d", &n);
for(i=1;i<=n;i++)
   sum+=(2*i-1)*(2*i-1);
printf("\nThe sum of squares of first %d odd numbers = %d",n, sum);
getche();
return 0;
}