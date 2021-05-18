#include<stdio.h>
int main()
/*{
    int n;
    printf("How many times you wanna print?\n");
    scanf("%d", &n);
    for(int i=1; i<=n; i=i+1)
    {
        printf("Code Likha h...Count kr\n");
    }    
    return 0;
}*/
/*{
    int n, i=0;
    printf("How many times you wanna print?\n");
    scanf("%d", &n);
    while (i<n)
    {
        printf("Code likha h\n");
        i++;
    }
    return 0;
}*/
{
    int n, i=0;
    printf("How many times you wanna print?\n");
    scanf("%d", &n);
    do
    {
        printf("Code likha h\n");
        i++;
    }
    while(i<n);
    return 0;
}