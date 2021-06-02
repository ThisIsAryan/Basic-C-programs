// #include<stdio.h>
// void good_morning();
// void good_afternoon();  
// int main() 
// {
// good_morning();
// return 0;
// }
// void good_morning()
// {
//     printf("Good morning\n");
//     good_afternoon();
// }
// void good_afternoon()
// {
//     printf("Good afternoon");
// }

// #include<stdio.h>
// int sum(int a, int b);
// int main() {
//    int a,b, result;
//    printf("Enter the 2 numbers\n");
//    scanf("%d %d",&a, &b);
//    result = sum(a,b);
//    printf("The sum of %d and %d is %d",a, b, result);
//    return 0;
// }
// int sum(int a, int b){
//     int result = a+b;
//     return result;
// }

//Recursion-

#include<stdio.h>
int fact(int num);
int main() {
   int num;
   printf("Enter the number: \n");
   scanf("%d", &num);
   printf("The factorial of %d is %d", num, fact(num));
   return 0;
}
int fact(int num)
{
    //printf("Calling fact(%d)\n", num);
    if(num==1 || num==0)
    return 1;
    else
    return num * fact(num -1);
    
}