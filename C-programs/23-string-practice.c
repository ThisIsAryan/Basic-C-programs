// //Write a program to take a string as an input from the user using %c and %s. Confirm that the strings are equal.
// #include<stdio.h>
// #include<string.h>
// int main() {
//     char str1[50];
//     char str2[50];
//     char c;
//     int i=0;
//     printf("Enter the first string: \n");
//     gets(str1);
//     printf("Enter the value of second string character by character: \n");
//     while(c != '\n')
//     {
//         fflush(stdin); //ye is loop k end m bhi laga skte....apne ko sirf \n hatana h.
//         scanf("%c", &c);
//         str2[i]=c;
//         i++;
//     }
//     str2[i-1]= '\0';
//     printf("The string 1 is : %s\n", str1);
//     printf("The string 2 is : %s\n", str2);
//     printf("The strcmp value is %d", strcmp(str1,str2));
//     return 0;
// }

// //Own version of strlen()

// #include<stdio.h>
// int strlen(char *str)
// {
//     int n = 0;
//     while(*str != '\0')
//     {
//         n++;
//         str++;
//     }
//     return n;
// }
// int main() {
//     char name[50];
//     printf("Enter name : ");//Space matt diyo
//     scanf("%s", name);
//     printf("The length of the name string is %d", strlen(name));
//     return 0;
// }

//Write a function slice() to slice a string. It should change the original string such that it is now the sliced strings. Take m and n as the start and ending position for slice.
#include<stdio.h>
void slice(char *str, int m, int n)
{
    int i=0;
    while((i+m)<=n)
    {
        str[i]=str[i+m-1];
        i++;
    }
    str[i]='\0';
}
int main() {
    char name[50]; int m,n;
    printf("Enter name : ");//Space bhi chalega
    gets(name);
    fflush(stdin);
    printf("Enter the lower and upper slicing limits: ");
    scanf("%d %d", &m, &n);
    slice(name, m, n);
    //printf("The sliced string is %s", name);
    puts(name);
    return 0;
// }

// //Write your own version of strcpy function from <string.h>
// #include<stdio.h>
// void strcpy(char *target, char *source)
// {
//     char temp = '*source'; int i=0;
//     while(*(source + i)!= '\0')
//     //while(temp != 0)- ye mat krna, overflow hoga while conversion.
//     {
//         *(target + i) = *(source + i);
//         i++;
//     }
//     *(target +i) = '\0'; 
// }
// int main() {
//     char target[50], source[50];
//     printf("Enter source string: ");
//     gets(source);
//     printf("Enter target string: ");//Sould  be smaller than target.
//     gets(target);
//     strcpy(target, source);
//     printf("After copy, the target sting is ");
//     puts(target);
//     printf("And, the source string is also ");
//     puts(source);
//     return 0;
// }

// //Write a program to encrypt a string by adding 1 to the ASCII value of its characters.
// #include<stdio.h>
// #include<string.h>
// void encrypt(char *str)
// {
//     char *ptr = str;
//     while(*ptr != '\0')
//     {
//         *ptr = *ptr + 1;
//         ptr++;
//     }
// }
// void decrypt(char *str, int n)
// {
//     for(int i=0; i<n; i++)
//     {
//         str[i] = str[i] - 1;
//     }
// }
// int main() {
//     char str[50];
//     printf("Enter the string: ");
//     gets(str);
//     int n = strlen(str);
//     printf("String length = %d\n", strlen(str));
//     encrypt(&str[0]);
//     printf("The encrypted string is: ");
//     puts(str);
//     decrypt(str, n);
//     printf("The decrypted string is: ");
//     puts(str);
//     return 0;
// }

//Write a program to count the occurrence of a given character in a string-

#include<stdio.h>
int cnt(char str[], char c)
{
    int i=0, cnt=0;
    while(str[i] != '\0')
    {
        if(str[i] == c)
        cnt++;
        i++;    
    }
    return cnt;
}
int main() {
    char str[50], c;
    printf("Enter the string: ");
    gets(str);
    printf("Enter the chararcter whose occurance is to be counted: ");
    scanf(" %c", &c);
    printf("The number of time %c has occured in ", c);
    puts(str);
    printf("= %d",cnt(str, c));
    return 0;
}