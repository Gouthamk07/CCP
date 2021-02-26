#include<stdio.h>
#include<conio.h>
#include<math.h>
float area_of_triangle(float,float,float);
int main()
{
float area, a, b, c;
clrscr();
printf("\n Enter the three sides of the triangle:");
scanf("%f %f %f", &a, &b, &c);
area= area_of_triangle(a, b, c);
printf("\n Area of the triangle=%.2f",area);
getche();
return 0;
}
float area_of_triangle(float a,float b,float c)
{
float S, area;
S=(a+b+c)/2;
area=sqrt(S*(S-a)*(S-b)*(S-c));
return area;
}