// //Declaration-

// #include<stdio.h>
// #include<string.h>
// struct employee
// {
//     int code;
//     float salary;
//     char name[50];
// };
// int main() {
//     struct employee e1;
//     e1.code = 101;
//     e1.salary = 25.51;
//     // e1.name = "Aryan Hajela" -> won't work coz array m pointer input not allowed.
//     strcpy(e1.name,"Aryan Hajela");
//     //Better use struct employee e1 = {101 , 25.51, "Aryan Hajela"};
//     printf("The employee name is: %s\n", e1.name);
//     printf("The employee code is %d\n", e1.code);
//     printf("The employee salary is: %f", e1.salary);
//     return 0;
// }

#include<stdio.h>
#include<string.h>
struct employee
{
    int code;
    float salary;
    char name[50];
};
int main() {
    struct employee e1, e2, e3;
    printf("Enter name of employee 1: \n");
    gets(e1.name);
    printf("Enter code of employee 1: \n");
    scanf("%d", &e1.code);
    printf("Enter salary of employee 1: \n");
    scanf("%f", &e1.salary);
    fflush(stdin);
    printf("Enter name of employee 2: \n");
    gets(e2.name);
    printf("Enter code of employee 2: \n");
    scanf("%d", &e2.code);
    printf("Enter salary of employee 2: \n");
    scanf("%f", &e2.salary);
    fflush(stdin);
    printf("Enter name of employee 3: \n");
    gets(e3.name);
    printf("Enter code of employee 3: \n");
    scanf("%d", &e3.code);
    printf("Enter salary of employee 3: \n");
    scanf("%f", &e3.salary);

    printf("\nEmployee 1 ->\nName- ");
    puts(e1.name);
    printf("Code: %d\n", e1.code);
    printf("Salary: %f\n", e1.salary);

    printf("\nEmployee 2 ->\nName- ");
    puts(e2.name);
    printf("Code: %d\n", e2.code);
    printf("Salary: %f\n", e2.salary);

    printf("\nEmployee 3 ->\nName- ");
    puts(e3.name);
    printf("Code: %d\n", e3.code);
    printf("Salary: %f\n", e3.salary);

    return 0;
}