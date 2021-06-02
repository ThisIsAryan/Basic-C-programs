//Create an array dynamically capable of storing 5 integers. Now use realloc so that it can now store 10 integers.
#include<stdio.h>
#include<stdlib.h>
int main() {
    int *arr;
    arr = (int*)malloc(6*sizeof(int));
    for(int i = 0; i<6; i++)
    {
        printf("Enter thr value of %d integer: \n",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<10; i++)
    printf("The value of %d element is %d\n",i+1, arr[i]);
    arr = realloc(arr, 10*sizeof(int));
    for(int i = 0; i<6; i++)
    {
        printf("Enter thr value of %d integer: \n",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<10; i++)
    printf("The value of %d element is %d\n",i+1, arr[i]);
    return 0;
}