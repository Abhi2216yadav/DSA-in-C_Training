// Write a C program to calculate employee salary with bonus. 
#include<stdio.h>
int main(){
    float salary;
    float bonus = 0.10;//assume 10% bonus

    printf("Enter your salary  : ");
    scanf("%f",&salary);

    bonus = salary * bonus;
    float FinalSalary = salary + bonus;

    printf("\nBonus amount = %.2f Rupee", bonus);
    printf("\nTotal salary After bonus = %.2f Rupee", FinalSalary);
    return 0;
}