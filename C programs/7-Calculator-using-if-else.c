#include<stdio.h>
#include<conio.h>
int main()
{
	float a, b, c;
	char d;
	printf("Enter the two numbers:");
	scanf("%f %f", &a, &b);
	skip: //check use in line 22
	printf("Enter Operand /, *, +, - :");
	scanf(" %c", &d);
	if(d== '+')
	printf("Answer= %f", a+b);
	else if(d== '-' || d== 'f')
	printf("Answer= %f", a-b);
	else if(d== '/')
	printf("Answer= %f", a/b);
	else if(d== '*')
	printf("%f %c %f = %f",a, d, b, a*b);// aise bhi kr skta...ya store krke end m print.....use goto to ignore that print command.
	else
	{
		printf("Incorrect operand\nAgain ");
		goto skip;
    }
    getch;
	return 0;
}
