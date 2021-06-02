#include<stdio.h>
#include<string.h>
struct employee
{
    char name[100];
    int code;
    float salary;
};
int main() 
{
    struct employee facebook[100];
    printf("Enter the names of first 10 employees one by one: \n");
    for(int i = 0; i<10; i++)
    {
        fflush(stdin);
        gets(facebook[i].name);
    } 
    printf("Enter the code of first 10 employees one by one: \n");
    for(int i = 0; i<10; i++)
    {
        scanf("%d", &facebook[i].code);
    } 
    printf("Enter the salary of first 10 employees one by one: \n");
    for(int i = 0; i<10; i++)
    {
        scanf("%f", &facebook[i].salary);
    } 
    for(int i = 0 ; i<10;i++)
    {
        printf("Employee %d-\n", i+1);
        puts(facebook[i].name);
        printf("Code = %d\n", facebook[i].code);
        printf("Salary = %f\n\n", facebook[i].salary);
    }
    return 0;
}