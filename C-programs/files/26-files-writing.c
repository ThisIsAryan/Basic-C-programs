#include<stdio.h>
int main() {
    FILE *ptr;
    ptr = fopen("sample.txt", "w");
    int num = 65;
    fprintf(ptr, "The number is %d\n", num);
    fprintf(ptr, "Thank You!\n");
    fclose(ptr);
    return 0;
}