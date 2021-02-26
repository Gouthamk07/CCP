//Develop a C program to find all roots of quadratic equation
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int a, b, c;
float D, denominator, root1, root2, real_part, imaginary_part;
clrscr();
printf("\nEnter the values of a,b and c:");
scanf("%d %d %d", &a, &b, &c);
D = (b * b)-(4 * a * c);
denominator = (2 * a);
if(D>0)
{
printf("\n Real roots");
root1 = (-b + sqrt(D)) / (denominator);
root2 = (-b - sqrt(D)) / (denominator);
printf("\n Root1=%f\tRoot2=%f", root1, root2);
}
else if(D==0)
{
printf("\n Equal roots:");
root1= (-b/denominator);
root2= (-b/denominator);
printf("\n Root1=%f\tRoot2=%f", root1, root2);
}
else if(D<0)
{
printf("\n Imaginary Roots");
real_part = (-b)/(denominator);
imaginary_part =sqrt(-D)/(denominator);
printf("\nReal part = %f", real_part);
printf("\nImaginary part = %f", imaginary_part);
}
getche();
}