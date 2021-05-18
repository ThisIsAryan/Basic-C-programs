#include<stdio.h>
int main()
/*
1. only relational
{
	float a,b,c;
	printf("Enter the 3 numbers: ");
	scanf("%f%f%f",&a, &b, &c);
	if(a>b)
	{
		if(a>c)
		printf("%f is the greatest integer", a);
		else
		printf("%f is the greatest integer", c);
    }
    else
    {
    	if(b>c)
    	printf("%f is the greatest integer", b);
    	else
    	printf("%f is the greatest integer", c);
	}
    	return 0;
}
*/
/*
2. Logical and relational
{
float a, b, c;
printf("Enter the 3 numbers: ");
	scanf("%f%f%f",&a, &b, &c);
	if(a>b && a>c)
	printf("%f is the greatest integer", a);
	else if(b>a && b>c)
	printf("%f is the greatest integer", b);
	else
	printf("%f is the greatest integer", c);
return 0;
}
*/
//3. ternary operator
{
float a, b, c, storage;
printf("Enter the 3 numbers: ");
scanf("%f%f%f",&a, &b, &c);
storage = (a>b) ? (a>c ? a : c) : (b>c ? b : c);
printf("%f is the greatest number.", storage);
return 0;
}
	
