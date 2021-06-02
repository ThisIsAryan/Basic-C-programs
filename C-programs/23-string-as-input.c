#include<stdio.h>
// int main() {
//     char str1[50];
//     printf("Enter name: \n"); //Space matt dena, baad m scan nhi hoga
//     scanf("%s", str1); //scanf("%s", &str2); bhi kar skte....%s sambhal lega....
//     printf("The name is %s\n", str1);
//     printf("The address of str1[0] is %u and str1[2] is %u\n",str1,str1+2);
// }

// //gets() and puts() -
// int main() {
//     char str[50];
//     printf("Enter name: "); 
//     gets(str);
//     puts(str);
//     //printf("The name is %s\n", str);
//     return 0;
// }

// //- Declaration usingPoniter 
// int main()
// {
//     char *ptr = "Aryan";//char ptr[] = "Aryan";- isme string change nhi hota
//     ptr = "Harvey";
//     puts(ptr);
//     return 0;
// }

//String library functions-
#include<string.h>
int main()
{
    char name[30] = "Harvey ";
    char *surname;
    printf("Enter surname: ");//Enter Spectre.
    gets(surname);
    puts(surname);
    printf("The length of name is %d and surname is %d\n", strlen(name), strlen(surname));
    char copy[30] = "Ross";
    strcpy(surname, copy);//surname should be larger than copy.
    puts(surname);
    surname = "Spectre";
    strcat(name, surname);
    puts(name);
    if(strcmp(name,surname)<0)
    printf("It means, the first mismatching char H has less ASCII value than S");
    return 0;
} 