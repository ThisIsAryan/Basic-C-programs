#include<stdio.h>
#include<math.h>
int main()
{
	float a, b;
	printf("Hi\nPlease enter the radius ");
	scanf("%f",&a);
	printf("And the height is?");
	scanf("%f",&b);
	//float sum = sqrt(a*a + b*b);
	a = a*a;
	printf("Volume= %f", 3.14*a*b);
	return 0;
}
