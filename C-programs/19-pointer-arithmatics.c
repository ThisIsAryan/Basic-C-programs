#include<stdio.h>
int main() {
    int a=4, *b=&a;
    printf("The value of b is %u\n", b);
    printf("The variable value store is %d\n", *b);
    b++;
    printf("The value of b is %u\n", b);
    printf("The variable value store is %d\n", *b);
    b = b+2;
    printf("The value of b is %u\n", b);
    return 0;
}