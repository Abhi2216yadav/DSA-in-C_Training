//Write a C program to check whether a number is even or odd.
#include<stdio.h>
int main(){
    int n;
    printf("Enter number to check odd or Even : ");
    scanf("%d",&n);

    if(n % 2 == 0){
        printf("Number %d is Even",n);
    }else{
        printf("Number %d is Odd",n);
    }
    return 0;
}