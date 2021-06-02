// //Create a two-dimensional vector using structures in C.
// #include<stdio.h>
// typedef struct vector{
//     float x;
//     float y;
// }vec;
// int main() {
//     vec v1,v2,v3;
//     v1.x = 5;
//     v1.y = 10;
//     printf("The vector v1 is %fi + %fj\\n", v1.x, v1.y);
//     return 0;
// }

//Write a function SumVector which returns the sum of two vectors passed to it. The vectors must be two-dimensional.
// #include<stdio.h>
// typedef struct vector{
//     float x;
//     float y;
// }vec;
// vec sum(vec v1, vec v2)
// {
//     vec sum;
//     sum.x = v1.x + v2.x;    
//     sum.y = v1.y + v2.y;
//     //printf("The sum of vectors is %fi + %fj\n", sum.x, sum.y);
//     return sum;
// }
// int main() {
//     vec v1,v2,s;
//     v1.x = 5;
//     v1.y = 10;
//     v2.x = 25;
//     v2.y = 30;
//     printf("The vector v1 is %fi + %fj\n", v1.x, v1.y);
//     printf("The vector v2 is %fi + %fj\n", v2.x, v2.y);
//     s = sum(v1, v2);
//     printf("The sum of vectors is %fi + %fj\n", s.x, s.y);
//     return 0;
// }

// //Create an array of 5 vectors created in above problem and display them with the help of a display function. The values must be taken as an input from the user.

// #include<stdio.h>
// typedef struct vector{
//     float x;
//     float y;
// }vec;
// void display(vec *v)
// {
//     for(int i=0;i<5;i++)
//     {
//         printf("The vector %d is %fi + %fj\n",i+1,v[i].x,v[i].y);
//     }
// }
// int main() {
//     vec v[5];
//     for(int i=0;i<5;i++)
//     {
//     printf("Enter the x co-ordinate of vector %d\n", i+1);
//     scanf("%f", &v[i].x);
//     printf("Enter the y co-ordinate of vector %d\n", i+1);
//     scanf("%f", &v[i].y);
//     }
//     display(v);
//     return 0;
// }

//Write a structure capable of storing date. Write a function to compare those dates.


#include<stdio.h>
typedef struct date{
    int DD;
    int MM;
    int YY;
}date;
date compare(date d1, date d2)
{
    if(d1.YY < d2.YY)
    return d1;
    else if(d1.YY == d2.YY)
    {
        if(d1.MM < d2.MM)
        return d1;
        else if(d1.MM == d2.MM)
        {
            if(d1.DD < d2.DD)
            return d1;
            else if(d1.DD == d2.DD)
            {    
                printf("Both dates are same. Either of ");
                return d1;
            }
            else
            return d2;
        }
        else 
        return d2;
    }
    else
    return d2;      
}
int main() {
    date d1,d2, d;
    printf("Enter the first date\nDate: ");
    scanf("%d", &d1.DD);
    printf("Month: ");
    scanf("%d", &d1.MM);
    printf("Year: ");
    scanf("%d", &d1.YY);
    
    printf("Enter the second date\nDate: ");
    scanf("%d", &d2.DD);
    printf("Month: ");
    scanf("%d", &d2.MM);
    printf("Year: ");
    scanf("%d", &d2.YY);
    
    d = compare(d1, d2);
    printf("The date %d / %d / %d arrived earlier.\n", d.DD, d.MM, d.YY);
    return 0;
}