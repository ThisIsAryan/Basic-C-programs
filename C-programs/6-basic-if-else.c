#include<stdio.h>
#include<conio.h>
int main()
{
	int year;
	printf("Enter the year: ");
	scanf("%d", &year);
	if(year%400==0)
	{
	     printf("It's a leap year");	
	}
	else if(year%4==0 && year%100!=0)
	{
		printf("It's a leap year");
	}
	else
	printf("Not a leap year");
getch;
return 0;
}
