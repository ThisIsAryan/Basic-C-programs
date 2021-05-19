#include<stdio.h>
int main()
/*{
    int n;
    printf("Enter the number: \n");
    scanf("%d",&n);
    if(n==0)
    printf("The reversed number is 0");
    else
    {
        printf("The reversed number is ");
        for(;n!=0;n = n/10)
        printf("%d",n%10);
    }
    return 0;
}*/
{
    int n, result=0;
    printf("Enter the number\n");
    scanf("%d",&n);
    for(;n>0; n = n/10)
    {
            int b= n%10;
            result= result*10 + b;
    }
    printf("Ye le mirror: %d", result);
    return 0;
}