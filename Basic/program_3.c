/*
Input length and breadth and calculate area of rectangle
*/

// Solved by glitchy-coder-exe

#include<stdio.h>
#include<conio.h>
int main(){
    float l,b;
    clrscr();
    printf("Enter the length and breadth of the rectangle: \n");
    scanf("%f\n%f",&l,&b);
    printf("The area of the rectangle is %f",l*b);
    getch();
    return 0;
}
