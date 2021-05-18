#include<stdio.h>
int main()
{
    int x, d, fac=1;
    printf("Enter the number: \n");
    scanf("%d", &x);
    d = x;
    if(x==0)
    printf("Factorial  of 0 is 1");
    else if(x<0)
    printf("Negative numbers have inderminent factorial");
    else
    {
      for(int i=x; i>0; i--)
    {
      fac= fac*i;
    }
    printf("The factorial of %d is %d", d, fac);
    }
    return 0;;
}