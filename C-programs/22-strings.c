// #include<stdio.h>
// int main() {
//     char str[] = {'H','A','R','R','Y','\0'};
//     char name[]= "Aryan";
//     for (int i=0;i<6;i++)
//     printf("%c",str[i]);
//     printf("\n");
//     for (int i=0;i<5;i++)
//     printf("%c",name[i]);
//     return 0;
// }

#include<stdio.h>
int main() {
    //char str[]="Aryan";
    //char *ptr = str;
    char *ptr = "Aryan";
    while(*ptr!='\0')
    {
        printf("%c",*ptr); //printf("%c",*(ptr +i)); won't work coz condition in while check nhi hopayega.
        ptr++;
    }
    return 0;
}

// //- Important-
// #include <stdio.h>

// int main(void) {
    
//   // pointer variable to store string
//   char *strPtr = "Hello";
  
//   // temporary pointer variable
//   char *t = strPtr;
  
//   // print the string
//   while(*t != '\0') {
//     printf("%c", *t);
    
//     // move the t pointer to the next memory location
//     t++;
//   }
  
//   return 0;
// }

//-Convinient way to print string-

#include<stdio.h>
int main() {
    char *ptr = "Aryan"; //char name[6] = "Aryan";
    printf("%s", ptr); //printf("%s", name);
    return 0;
}