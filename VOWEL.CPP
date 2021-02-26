#include<stdio.h>
#include<conio.h>
int main()
{
char ch;
clrscr();
printf("\nEnter any character:");
scanf("%c", &ch);
switch(ch)
{
case 'A':
case 'a':
	printf("\n%c is a vowel", ch);
	break;
case 'E':
case 'e':
	printf("\n%c is a vowel", ch);
	break;
case 'I':
case 'i':
	printf("\n%c is a vowel", ch);
	break;
case 'O':
case 'o':
	printf("\n%c is a vowel", ch);
	break;
case 'U':
case 'u':
	printf("\n%c is a vowel", ch);
	break;
default:
	printf("\n%c is a CONSONANT", ch);
}
getche();
return 0;
}