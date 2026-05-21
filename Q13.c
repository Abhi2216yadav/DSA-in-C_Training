// Write a C program to calculate grade based on marks. 
#include<stdio.h>
int main(){
    int marks;
    
    printf("Enter your marks : ");
    scanf("%d",&marks);

    if(marks >= 90 && marks <= 100){
        printf("Grade = O");
    }else if(marks >= 80){
        printf("Grade = E");

    }else if(marks >= 70){
        printf("Grade = A");

    }else if(marks >= 60){
        printf("Grade = B");

    }else if(marks >= 50){
        printf("Grade = C");

    }else if(marks >= 40){
        printf("Grade = D");

    }else{
        printf("Fail.");
    }
    return 0;
}