
// //1. Write a program to read three integers from a file.
// #include<stdio.h>
// int main() {
//     FILE *read;
//     read = fopen("read.txt","r");int a,b,c;
//     fscanf(read, "%d %d %d", &a, &b, &c);
//     printf("The e numbers are: %d %d %d",a,b,c);
//     return 0;
// }

// //2. Write a program to generate a multiplication table of a given number in text format. Make sure that the file is readable and well-formatted.
// #include<stdio.h>
// int main() {
//     FILE *mul;
//     mul = fopen("multiplication.txt","w");
//     int n;
//     printf("Enter the number: \n");
//     scanf("%d", &n);
//     for(int i=0; i<10;i++)
//     {
//         fprintf(mul,"%d * %d = %d\n",n,i+1,n*(i+1));
//     }
//     return 0;
// }

// //3. Write a program to read a text file character by character and write its content twice in a separate file.
// #include<stdio.h>
// int main() {
//     FILE *source;
//     source = fopen("demo.txt","r");
//     char c = fgetc(source);
//     char str[50]; int i=0;
//     while(c!=EOF)
//     {
//         printf("%c",c);
//         str[i]=c;
//         c = fgetc(source);
//         i++;
//     } 
//     str[i] = '\0';
//     printf("\n");
//     puts(str);
//     fclose(source);
//     FILE *target;
//     target = fopen("target.txt","w");
//     i=0;
//     while(str[i]!='\0')
//     {
//         fprintf(target, "%c",str[i]);
//         i++;
//     }
//     fprintf(target,"\n");
//     i=0;
//     while(str[i]!='\0')
//     {
//         fprintf(target, "%c",str[i]);
//         i++;
//     }
//     fclose(target);
//     return 0;
// }
// #include<stdio.h>
// int main() {
//     FILE *source;
//     source = fopen("demo.txt","r");
//     FILE *target;
//     target = fopen("target.txt","w");
//     char c = fgetc(source);
//     while(c!=EOF)
//     {
//         printf("%c",c);
//         fprintf(target, "%c", c);
//         fputc(c,target);
//         c = fgetc(source);
//     } 
//     fclose(source);
//     fclose(target);
//     return 0;
// }

// //4. Take name and salary of two employees as input from the user and write them to a text file in the following format: name1, 3300 \n name2, 7700.
// #include<stdio.h>
// typedef struct employee{
//     char name[50];
//     float salary;
// }emp;
// int main() {
//     emp e1,e2;
//     printf("Enter the name of first employee: \n");
//     gets(e1.name);
//     printf("Enter the salary of first employee: \n");
//     scanf("%f",&e1.salary);
//     fflush(stdin);
//     printf("Enter the name of second employee: \n");
//     gets(e2.name);
//     printf("Enter the salary of second employee: \n");
//     scanf("%f",&e2.salary);
//     FILE *details;
//     details = fopen("details.txt","w");
//     fprintf(details, "%s, %f\n",e1.name,e1.salary);
//     fprintf(details, "%s, %f\n",e2.name,e2.salary);
//     return 0;
// }    

// //5. Write a program to modify a file containing an integer to double its value. If old value = 2, then new file value = 4
// #include<stdio.h>
// int main() {
//     FILE *modify;
//     modify = fopen("integer.txt", "r"); int n;
//     fscanf(modify, "%d", &n);
//     fclose(modify);
//     modify = fopen("integer.txt","w");
//     fprintf(modify, "%d", 2*n);
//     fclose(modify);
//     return 0;
// }
       