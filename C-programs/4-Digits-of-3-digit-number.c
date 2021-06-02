#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int a;
	printf("Hey!!\nPlease enter a 3 digit number: ");
	scanf("%d", &a);
	printf("The digits are: %d, %d and %d", a/100, (a/10)%10, a%10);
	getch();
	return 0;
}
