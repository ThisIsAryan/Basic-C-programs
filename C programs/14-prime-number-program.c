//Code to check whether given number prime or composite
/*#include<stdio.h>
int main()
{
    int n, d=1;
    printf("Enter a number greater than 1: \n");
    scanf("%d", &n);
    for(int i=n/2;i>1;i--)
    {
        if(n%i==0)
        {
            d=0;
            break;
        }
    }
    (d==1) ? printf("It is prime") : printf("It is composite")
    return 0;
}*/

//Code to print all prime numbers smaller than an input number.
#include<stdio.h>
#include<math.h>
int main()
{
    int c, n, i, d;
    printf("Enter a number greater than 1: \n");
    scanf("%d",&c);
    printf("Prime numbers smaller than %d are: ", c);
    for(n=c;n>1;n--)
    {
        d=1;
        for(i=sqrt(n);i>1;i--)
        {
            if(n%i==0)
            {
                d=0;
                break;
            }    
        }
        if(d==1)
        printf("%d  ", n);
    }
    return 0;
}