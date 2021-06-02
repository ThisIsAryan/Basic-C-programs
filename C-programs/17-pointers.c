// //Declaration- 
// #include<stdio.h>
// int main() {
//     int i=8, *j;
//     j= &i;
//     printf("The value of i is %d or %u \n", i, *(&i));
//     printf("The value of i is %u \n", *j);
//     printf("The value of j is %u or %d\n", *(&j), j);
//     printf("The address of i is %u \n", &i);
//     printf("The address of i is %u \n", j);
//     printf("The address of j is %u \n", &j);
//     return 0;
// }

// //- Call by value
// #include<stdio.h>
// int sum(int a, int b);
// int main() {
//     int a= 5, b=6;
//     printf("The sum is %d\n", sum(a,b));
//     printf("The values after call by value = %d and %d", a, b);
//     return 0;
// }
// int sum(int a, int b)
// {
//     return a+b;
//     a=15;b=15;
// }

//- Call by reference- 
#include<stdio.h>
void swap(int *a, int *b);
int main() {
    int a=5,b=4;
    printf("Before swap, the value of a = %d and b = %d\n", a, b);
    swap(&a,&b);
    printf("After swap, the value of a = %d and b = %d", a, b);
    return 0;
}
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

