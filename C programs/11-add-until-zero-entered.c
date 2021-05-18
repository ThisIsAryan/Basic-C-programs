#include<stdio.h>
int main()
/*{
    int x, sum = 0;
    do
    {
        printf("Enter the number:\n");
        scanf("%d",&x);
        sum = sum + x;
    }
    while (x != 0);
    printf("Total Sum = %d", sum);
    return 0;
}*/
{
    int x, sum=0;
    for(x+1; x!=0; )
    {
        printf("Enter the number:\n");
        scanf("%d", &x);
        sum = sum + x;
    }
    printf("Total Sum = %d", sum);
    return 0;
}