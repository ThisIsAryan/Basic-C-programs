// //Average of three numbers-
// #include<stdio.h>
// float avg(int a, int b, int c);
// int main() {
//    int a,b, c;
//    printf("Enter the three numbers: \n");
//    scanf("%d %d %d", &a, &b, &c);
//    printf("The average is %f", avg(a,b,c));
//    return 0;
// }
// float avg(int a, int b, int c)
// {
//     return (float)(a+b+c)/3;
// }

// //Nth element of fibonacci series- 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, .....
// #include<stdio.h>
// int fbc(int a);
// int main() {
//    int x;
//    printf("Enter the element to be found: \n");
//    scanf("%d", &x);
//    printf("The %d element of the Fibonacci series is: %d", x, fbc(x));
//    return 0;
// }
// int fbc(int a)
// {
//     if(a==1)
//     return 0;
//     else if(a==2)
//     return 1;
//     else
//     return fbc(a-1) + fbc(a-2); 
// }

// //Write a recursive function to calculate the sum of first n natural numbers.
// #include<stdio.h>
// int sum(int n);
// int main() {
//     int n;
//    printf("Eneter n: ");
//    scanf("%d", &n);
//    printf("The sum of first %d numbers is %d", n, sum(n));
//    return 0;
// }
// int sum(int n)
// {
//     if(n==1)
//     return 1;
//     else
//     return n + sum (n-1);
// }

// Write a program using recursion to print the increasing star pattern(first n lines)
#include<stdio.h>
void star(int n);
int main() {
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    star(n);
    return 0;
}
void star(int n)
{
    if(n==1)
    {   printf("*\n");
        return;
    }
    star(n-1);
    for(int i=1; i<= 2*n-1; i++)
    {printf("*");}
    printf("\n");
    //return; - may or may not be included.
}