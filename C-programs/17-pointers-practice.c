// //Write a program to change the value of a variable to ten times its current value. Write a function and pass the value by reference.
// #include<stdio.h>
// void change(int *a);
// int main() {
//     int a = 5;
//     change(&a);
//     printf("10 times of %d is %d", 5, a);
//     return 0;
// }
// void change(int *a)
// {
//     *a = 10 * (*a);
// }

// Write a program using a function that calculates the sum and average of two numbers. Use pointers and print the values of sum and average in main().
#include<stdio.h>
void SumAndAvg(int a, int b, int *sum, float *avg);
int main() {
    int a=3,b=8, sum; float average;
    SumAndAvg(a,b,&sum, &average);
    printf("Sum = %d\nAverage = %f",sum, average );
    return 0;
}
void SumAndAvg(int a, int b, int *sum, float *avg)
{
    *sum = a + b;
    *avg = (float)(*sum)/2;
}


// //Write a program to print the value of a variable i by using "pointer to pointer" type of variable.
// #include<stdio.h>
// int main() {
//     int a=5, *b, **c;
//     b=&a;c=&b;
//     printf("The value of a is %d",**c);
//     return 0;
// }