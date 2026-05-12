//Write a C program to find the sum of first N natural numbers. 
#include<stdio.h>
int main(){
    int n;
    printf("Enter number : ");
    scanf("%d",&n);

    // int sum =0;

    // for(int i = 1; i<= n; i++){
    //     sum += i;
    // }
    int ans = (n* (n+1)) / 2;
    printf("First n natural number sum = %d",ans);
    return 0;
}
