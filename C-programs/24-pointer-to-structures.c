// #include<stdio.h>
// struct data
// {
//     int code;
//     float salary;
//     char name[50];
// };
// int main() {
//     struct data e1 = {100,30.5,"Aryan"};
//     struct data *ptr;
//     ptr = &e1;
//     printf("%d\n", (*ptr).code);
//     (*ptr).code = 101;
//     printf("%d\n", (*ptr).code);
//     printf("Enter new salary: ");
//     scanf("%f", &ptr->salary);
//     printf("The new salary is: %f\n", ptr->salary);
//     return 0;
// }

//passing to a function-
// #include<stdio.h>
// struct data
// {
//     int code;
//     float salary;
//     char name[50];
// };
// void show(struct data e)
// {
//     printf("The code is %d \n", e.code);
//     printf("The salary is %f \n", e.salary);
//     printf("The name is %s \n", e.name);
//     e.code = 14;//Change nahi hoga
// }
// int main() {
//     struct data e1 = {100,30.5,"Aryan"};
//     //struct data *ptr;
//     //ptr = &e1;
//     show(e1);
//     printf("The new code is: %d\n", e1.code);//Change nahi hoga
//     return 0;
// }

#include<stdio.h>
struct data
{
    int code;
    float salary;
    char name[50];
};
void show(struct data *e)
{
    printf("The code is %d \n", e->code);
    printf("The salary is %f \n", e->salary);
    printf("The name is %s \n", e->name);
    e->code = 14;//Change hoga
}
int main() {
    struct data e1 = {100,30.5,"Aryan"};
    struct data *ptr;
    ptr = &e1;
    show(ptr);
    printf("The new code is: %d\n", e1.code);//Change hoga
    return 0;
}
