// Write a C program to find factorial of a number. 
#include<stdio.h>
int main(){
    int n;
    printf("Enter number : ");
    scanf("%d",&n);

    int fact = 1;

    for(int i = 1; i<= n; i++){
        fact *= i;
    }
    printf("Factorial of %d = %d",n,fact);

    return 0;
}
