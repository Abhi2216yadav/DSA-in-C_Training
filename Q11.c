// Write a C program to calculate total and average marks of students.
#include<stdio.h>
int main(){
    int a, b, c;
    printf("Enter three marks : ");
    scanf("%d%d%d",&a,&b,&c);

    int total = a + b + c;
    float average = total/3;

    printf("Total marks = %d", total);
    printf("\nAverage of the marks = %.2f", average);
    return 0;
}