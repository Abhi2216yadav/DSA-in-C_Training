// Write a C program to calculate shopping cart total bill.
#include<stdio.h>
int main(){
    int q;
    
    float gst = 0.5;

    printf("Enter Number of Quantity  : ");
    scanf("%d",&q);

    int arr[q];
    float total = 0;

    printf("\nEnter price of goods one by one : ");
    for(int i =0; i<q; i++){
        scanf("%d",&arr[i]);
        total += arr[i];
    }

    float bill = (total * gst) + total;

    printf("\nShopping cart total bill = %.2f Rupee", bill);
    return 0;

}