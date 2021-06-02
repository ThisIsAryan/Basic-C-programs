#include<stdio.h>
#include<conio.h>
int main()
{
	float a, b, r;
	char c;
	printf("Enter the two numbers: \n");
	scanf("%f %f", &a, &b);
	Aryan:
	printf("Enter operation: \nA for addition\nS for subtraction\nM for multiplication\nD for Division\n");
	scanf(" %c", &c);
	switch (c)
	{
		case 'A': case 'a':
		r=a+b;
		break;
		case 'S': case 's':
		r=a-b;
		break;
		case 'M': case 'm':
		r=a*b;
		break;
		case 'D': case 'd':
		r=a/b;	
		break;
		default:	
	    printf("Wrong input\n");
        goto Aryan;
    } 
    printf("%f",r);
	getch();
	return 0;
}
