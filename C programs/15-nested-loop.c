//star increasing
#include<stdio.h>
/*int main()
{
    int a, i, j;
    printf("Enter the number: \n");
    scanf("%d", &a);
    for(i=0;i<a;i++)
    {
        for(j=0;j<=i;j++)
        printf("*");
        printf("\n");
    }
    return 0;
}*/
//star decreasing
/*int main()
{
    int a, i, j;
    printf("Enter the number of rows: \n");
    scanf("%d", &a);
    for(i=a;i>0;i--)
    {
        for(j=0;j<i;j++)
        printf("*");
        printf("\n");
    }
    return 0;
}*/
//pyramid decreasing
/*int main()
{
    int a, i, j, k, cnt=0;
    printf("Enter the number of rows: \n");
    scanf("%d", &a);
    for(i=a;i>0;i--)   
    {
        for(k=1;k<=cnt;k++)
        printf(" ");
        for(j=1;j<=2*i-1;j++)
        printf("*");
        ++cnt;
        printf("\n");
    }
    return 0;
}*/
//pyramid increasing
int main()
{
    int a, i, j, k, cnt;
    printf("Enter the number of rows: \n");
    scanf("%d", &a);
    cnt=a;
    for(i=0;i<a;i++)   
    {
        for(k=2;k<=cnt;k++)
        printf(" ");
        for(j=1;j<=2*i+1;j++)
        printf("*");
        --cnt;
        printf("\n");
    }
    return 0;
}
