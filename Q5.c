//Write a C program to find the largest of two numbers. 
#include<stdio.h>
int main(){
    int a, b;

    printf("Enter two numbers : ");
    scanf("%d%d",&a,&b);

    if(a > b){
        printf("Number %d is largest",a);
    }else{
        printf("Number %d is largest",b);

    }
    return 0;
}