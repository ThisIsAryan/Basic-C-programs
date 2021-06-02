// //Create an array of 10 numbers. Verify using pointer arithmetic that (ptr+2) points to the third element where ptr is a pointer pointing to the first element of the array.
// #include<stdio.h>
// int main() {
//     int arr[10];
//     int *ptr = arr; //int *ptr = &arr[0];
//     ptr = ptr +2;
//     if(ptr==&arr[2])
//     printf("They are same as memory location same.\n");
//     else
//     printf("They are not same");
//     return 0;
// }

// #include<stdio.h>
// int main() {
//     int arr[3] = {1,2,3};
//     printf("%d", *(arr+2));
//     return 0;
// }

// //Reversing array-
// #include<stdio.h>
// int main() {
//     int arr[10];
//     for (int i=0;i<10;i++)
//     {
//         printf("Enter the %d element- \n",i+1);
//         scanf("%d", &arr[i]);
//     }
//     printf("The reversed array is: \n");
//     for (int j=0; j<5; j++)
//     {
//         int temp = arr[j];
//         arr[j] = arr[9-j];
//         arr[9-j] = temp;
//     }
//     for (int i=0;i<10;i++)
//     {
//         printf("Element %d = %d\n",i+1, arr[i]);
//     }
//     return 0;
// }

// //- Write a program containing functions that counts the number of positive integers in an array.
// #include<stdio.h>
// int cnt(int arr[], int n);
// int main() {
//     int n; 
//     printf("Enter the number of elements: \n");
//     scanf("%d", &n);
//     int arr[n];
//     for (int i=0; i< n; i++)
//     {
//         printf("Enter the %d element: \n", i+1);
//         scanf("%d", &arr[i]);
//     }
//     printf("The number of positive integers is: %d\n", cnt(arr, n));
//     return 0;
// }
// int cnt(int arr[], int n)
// {
//     int cnt =0;
//     for(int i=0; i<n; i++)
//     {
//         if(arr[i]>0)
//         cnt++;
//     }
//     return cnt;
// }

// //- Create an array of size 3x10 containing multiplication tables of three numbers given by the user.
// #include<stdio.h>
// int main() {
//     int x,y,z;
//     int arr[3][10];
//     printf("Enter the 3 numbers: \n");
//     scanf("%d %d  %d", &x, &y, &z);
//     for (int j=0; j<10; j++)
//     arr[0][j] = x *(j+1);
//     for (int j=0; j<10; j++)
//     arr[1][j] = y *(j+1);
//     for (int j=0; j<10; j++)
//     arr[2][j] = z *(j+1);
//     printf("The multiplication tables are : \n");
//     for(int j=0;j<10;j++)
//     {       
//         for(int i=0;i<3;i++)
//         {
//             printf("%d \t",arr[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

//- Create a three-dimensional array and print the address of its elements in increasing order.
#include<stdio.h>
int main() {
    int arr[3][3][3] = {{1,2,3}, {4,5,6,}, {7,8,9,}};
    int *ptr = &arr[0][0][0];
    for(int i = 0;i<9;i++)
    {
        printf("%u\n",(ptr+i));
    }
    return 0;
}