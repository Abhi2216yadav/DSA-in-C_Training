//  Write a C program to store and display array elements. 
#include<stdio.h>
int main(){
    int n;
    printf("Enter size of Array : ");
    scanf("%d",&n);

    int arr[n];

    printf("Enter elements of Array : ");
    for(int i =0; i < n; i++){
        scanf("%d",&arr[i]);
    }

    printf("Array Elements are : ");
    for(int i =0; i<n; i++){
        printf("%d ",arr[i]);
    }
    return 0;
}