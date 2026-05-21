//. Write a C program to check whether a student is pass or fail.
#include<stdio.h>
int main(){
    int n;
    printf("Enter your marks : ");
    scanf("%d",&n);

    if(n >= 40 && n <= 100){
        printf("You are Pass");
    }else{
        printf("You are Fail");
    }
    return 0;
}
