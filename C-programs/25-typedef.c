#include<stdio.h>
#include<string.h>
typedef struct employee{
    int code;
    float salary;
    char name[50];
}emp;
void show(emp *e)
{
    printf("The code is %d \n", e->code);
    printf("The salary is %f \n", e->salary);
    printf("The name is %s \n", e->name);
}
int main() {
    emp e1;
    emp *ptr;
    ptr = &e1;
    ptr->code = 100;
    e1.salary = 20.5;
    strcpy(ptr->name,"Aryan");
    printf(" %d \t %f \t %s\n", e1.code, ptr->salary, e1.name);
    show(&e1);
    return 0;
}