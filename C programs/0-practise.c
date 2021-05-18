#include<stdio.h>
#include<conio.h>
int main()
/*{
	float a, b, r;
	printf("Enter the two numbers: \n");
	scanf("%f %f", &a, &b);
	r=(a>5)?(a+b):(a-b);
	printf("%f",r);
	return 0;
}*/
/*{
int i,j;
for (i=5;i>0;i--)
    {
	for (j=5-i;j>0;j--)
    printf(" ");
	}
printf("* ");
printf("\n");
return 0;
}*/
{
int n = 5;
for (int i = 0; i < n; i++)
{
for (int j = 0; j < 2*n; j++)
{
if(j>=n-1-i && j<=n-1+i){
printf("*");}
else{
printf(" ");}
}
printf("\n");
}
return 0;
}
	
