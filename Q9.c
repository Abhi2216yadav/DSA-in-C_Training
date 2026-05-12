// Write a C program using function to add two numbers. 
#include<stdio.h>

int add(int a, int b){
    return a + b;
}

int main(){
    int a, b;
    
    printf("Enter two numbers : ");
    scanf("%d%d",&a,&b);

    int sum = add(a,b);

    printf("Sum of two numbers = %d",sum);
    return 0;
}