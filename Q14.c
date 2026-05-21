//Write a C program for ATM withdrawal system.
#include<stdio.h>
int main(){
    int pin;
    int password = 1234;
    float amount = 900000.00;
    float withAmount;

    printf("Enter Amount to Withdrowal : ");
    scanf("%f",&withAmount);

    printf("\nEnter your Password : ");
    scanf("%d",&pin);

    if(pin == password){
        
        if(withAmount < amount){

            printf("\nYour Amount %.2f Rupee is withdrowal successfully !",withAmount);
            printf("\nYour total bank balance is %.2f Rupee",amount - withAmount);
            printf("\nThanks for visiting");

        }else{
            
            printf("\nYou don't have sufficient amount in you Bank");
        }
    }else{
        
        printf("\nWrong password Try again!");
        
    }
    return 0;

}