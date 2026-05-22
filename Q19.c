// Write a C program to sort product prices in ascending order.
#include<stdio.h>
int main(){
    int n;

    printf("Enter number of product : ");
    scanf("%d",&n);

    int arr[n];

    printf("\nEnter prices of products : ");
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }

    for(int i =0 ;i<n-1; i++){
        for(int j = i+1; j < n; j++){

            if(arr[i] > arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("Product prices in sorting order : ");
    for(int i = 0; i< n; i++){
        printf("%d ",arr[i]);
    }

    return 0;
}