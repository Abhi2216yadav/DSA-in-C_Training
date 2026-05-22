// Write a C program to calculate electricity bill. 
#include<stdio.h>
int main(){
    float unit;
    float perUnitprice = 500;//let assume

    printf("Enter your electricity unit : ");
    scanf("%f",&unit);

    float bill = perUnitprice * unit;

    printf("Electricity bill = %.2f Rupee", bill);
    return 0;
}