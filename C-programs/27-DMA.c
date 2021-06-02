// //malloc()-
// #include<stdio.h>
// #include<stdlib.h>
// int main() {
//     int *ptr;
//     // //Size of operators-
//     // printf("The size of int on my PC is %d\n",sizeof(int));    
//     // printf("The size of float on my PC is %d\n",sizeof(float));    
//     // printf("The size of char on my PC is %d\n",sizeof(char));    
//     ptr = (int *)malloc(6*sizeof(int));
//     for(int i=0;i<6;i++)
//     {
//         printf("Enter the %d value: \n",i+1);
//         scanf("%d",&ptr[i]);
//     }
//     for(int i=0;i<6;i++)
//     {
//         printf("The %d value is: %d\n",i+1,ptr[i]);
//     }
//     return 0;
// }

// // calloc()-
// #include<stdio.h>
// #include<stdlib.h>
// int main() {
//     int *ptr; 
//     ptr = (int *)calloc(6,sizeof(int));
//     for(int i=0;i<4;i++)
//     {
//         printf("Enter the %d value: \n",i+1);
//         scanf("%d",&ptr[i]);
//     }
//     for(int i=0;i<6;i++)//5 and 6 will be zero.
//     {
//         printf("The %d value is: %d\n",i+1,ptr[i]);
//     }
//     return 0;
// }

// //Write a program to create an array of size n using calloc() where n is an integer entered by the user.
// #include<stdio.h>
// #include<stdlib.h>
// int main() {
//     int *ptr, n;
//     ptr = (int *)calloc(n,sizeof(int));
//     printf("Enter thr size of array: \n");
//     scanf("%d", &n);
//     for(int i=0;i<n;i++)
//     {
//         printf("Enter the %d value: \n",i+1);
//         scanf("%d",&ptr[i]);
//     }
//     for(int i=0;i<n;i++)//5 and 6 will be zero.
//     {
//         printf("The %d value is: %d\n",i+1,ptr[i]);
//     }
//     return 0;
// }

// //Write a program to demonstrate the usage of free() with malloc().
// #include<stdio.h>
// #include<stdlib.h>
// int main() {
//     int *ptr, *ptr2;
//     ptr = (int *)malloc(600*sizeof(int));
//     for(int i= 0;i<600;i++)
//     {
//         ptr2 = (int*)malloc(6*sizeof(int));//Faaltu memory allocated.
//         printf("Enter the value of %d element\n", i+1);
//         scanf("%d", &ptr[i]);
//         free(ptr2);//Faaltu memory of ptr2 deallocated.
//     }
//     for(int i=0;i<6;i++)
//     {
//         printf("The value of %d element is: %d\n",i+1,ptr[i]);
//     }
//     return 0;
// }

//realloc-
#include<stdio.h>
#include<stdlib.h>
int main() {
    int *ptr;
    ptr = (int*)malloc(6*sizeof(int));
    for(int i=0; i <6; i++)
    {   
        printf("Enter the element: \n");
        scanf("%d", &ptr[i]);
    }
    for(int i=0; i <6; i++)
    printf("The element is: %d\n", ptr[i]);

    //Maaanle ab isme 10 integer store krne h.

    ptr = (int*)realloc(ptr, 10*sizeof(int));

    for(int i=0; i <10; i++)
    {   
        printf("Enter the element: \n");
        scanf("%d", &ptr[i]);
    }
    for(int i=0; i <10; i++)
    printf("The element is: %d\n", ptr[i]);
    
    return 0;
}