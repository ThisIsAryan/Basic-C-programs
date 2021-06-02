#include<stdio.h>
#include<math.h>
int main()
{
	float a, b, c, d, e;
	printf("Hi\nPlease enter the x and y co-ordinates point 1 respectively: ");
	scanf("%f %f",&a, &b);
	//scanf("%f",&b);
	printf("Hey agian\nPlease enter the x and y co-ordinates of point 2 respectively: ");
	scanf("%f %f",&c, &d);
	/*a = c-a;
	b = d-b;
	printf("distance= %f", sqrt(a*a + b*b));*/
	//second method
	e = sqrt(pow(c-a,2) + pow(d-b,2));
	printf("Distance = %f", e);
	return 0;
}
