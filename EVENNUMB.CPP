//develop a c program to print even numbers from m to n
#include<stdio.h>
#include<conio.h>
int main()
{
int i, m, n;
clrscr();
printf("\nEnter the value of m and n:");
scanf("%d %d", &m, &n);
for(i=m;i<=n;i++)
{
	if(i%2==0)
	printf("\n%d", i);
}
getche();
return 0;
}
