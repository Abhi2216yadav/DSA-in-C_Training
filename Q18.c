// Write a C program for product search system. 
#include<stdio.h>
#include<string.h>
int main(){
    char products[5][50] = {"Laptop", "mouse", "keyboard", "Adaptor","Phone"};
    char search[20];

    printf("Enter product name to search : ");
    scanf("%s",&search);

    int found = 0;
    int pos = 0;

    for(int i =0; i< 5; i++){
        if(strcmp(products[i], search )== 0){
            found = 1;
            pos = i+1;
            break;
        }
    }

    if(found == 1){
        printf("Product found at position %d",pos);
    }else{
        printf("Product not found");
    }
    return 0;
}