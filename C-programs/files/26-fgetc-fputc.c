// #include<stdio.h>
// int main() {
//     FILE *ptr;
//     //ptr = fopen("sample2.txt", "r");//phle yahan This is my code likha tha.
//     //char c1 = fgetc(ptr);
//     //char c2 = fgetc(ptr);
//     //printf("%c",c1);
//     //printf("%c",c2);
//     // printf("%c",fgetc(ptr));
//     // printf("%c",fgetc(ptr));
//     // printf("%c",fgetc(ptr));
//     // printf("%c",fgetc(ptr));//ek ek krke print.
//     ptr = fopen("sample3.txt", "w");
//     fputc('c', ptr);
//     fputc('a', ptr);
//     fputc('t', ptr);
//     fclose(ptr);
//     return 0;
// }

#include<stdio.h>
int main() {
    FILE *ptr;
    ptr = fopen("demo.txt","r");
    //fprintf(ptr, "My name is Aryan.");-write m kholna hi nhi.
    char c=fgetc(ptr);
    while(c!=EOF)
    {
        printf("%c", c);
        c = fgetc(ptr);
    }
    fclose(ptr);
    return 0;
}