// #include<stdio.h>
// int main() {
//     int marks[5], sum=0;
//     for(int i=0;i<5;i++)
//     {
//         printf("Enter the marks of %d student\n",i+1);
//         scanf("%d", &marks[i]);
//         sum += marks[i]; 
//     }
//     printf("The total marks is %d\n", sum);
//     return 0;
// }

// // Arrays with pointers.
// #include<stdio.h>
// int main() {
//     int marks[4];
//     //int *ptr = &marks[0];
//     int *ptr= marks;
//     for(int i=0; i<4; i++)
//    { printf("Enter the marks: \n");
//     scanf("%d", ptr);
//     ptr++;}
//     for(int i=0; i<4; i++)
//    { printf("The marks are: %d\n", marks[i]);
//     }
//     return 0;
// }

// //arryas to functions-


#include<stdio.h>
// void printarray (int *ptr, int n)
// {
//     for(int i=0;i<n;i++)
//     printf("The value of %d element is %d\n", i+1, *(ptr+i));
// }
void printarray (int ptr[], int n)
{
    for(int i=0;i<n;i++)
    printf("The value of %d element is %d\n", i+1, ptr[i]);
    ptr[2]= 677;
}
int main() {
    int arr[] = {9,67,35,65,7,7,68,123};
    printarray(arr,8); 
    printf("The value of second element after change is %d\n",arr[2]);
    return 0;
}

