// #include<stdio.h>
// int main() {
//     int n_students = 3, n_subjects = 5;
//     int array[3][5];
//     for(int i=0;i<n_students;i++)
//     for(int j=0;j<n_subjects;j++)
//     {
//         printf("Enter marks of student %d in subject %d\n", i+1, j+1);
//         scanf("%d", &array[i][j]);
//     }
//     for(int i=0;i<n_students;i++)
//     for(int j=0;j<n_subjects;j++)
//     {
//         printf("The marks of student %d in subject %d is %d\n", i+1, j+1, array[i][j]);
//     }
//     return 0;
// }

//Create a 2-d array by taking input from the user. Write a display function to print the content of this 2-d array on the screen.

#include<stdio.h>
void print(int *arr, int m, int n){
int cnt = 0;
for(int i = 0; i< m; i++)
    for(int j=0; j<n;j++)
    {
        printf("The the element in %d row and %d column is : %d \n", i+1, j+1, *(arr + cnt));
        cnt++;
    }
}
int main() 
{
    int m , n;
    //int arr[9][9] -- ye na krna, function m dikkat aayega
    printf("Number of rows = ?\n");
    scanf("%d", &m);
    printf("Number of columns = ?\n");
    scanf("%d", &n);
    int arr[m][n];
    for(int i = 0; i< m; i++)
    for(int j=0; j<n;j++)
    {
        printf("Enter the element in %d row and %d column : \n", i+1, j+1);
        scanf("%d", &arr[i][j]);
    }
    // for(int i = 0; i< m; i++)
    // for(int j=0; j<n;j++)
    // {
    //     printf("The the element in %d row and %d column is : %d \n", i+1, j+1, arr[i][j]);
    // }
    print(&arr[0][0], m, n);
    return 0;
}