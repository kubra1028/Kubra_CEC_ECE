#include<stdio.h>
int main(){
    int inputNumber=0,revNumber=0,digit,countNumber=0;
    printf("Enter a number:");
    scanf("%d",&inputNumber);
    while(inputNumber!=0){
        digit=inputNumber%10;
        countNumber++;
        revNumber+(revNumber*10)+digit;
        inputNumber=inputNumber/10;
        }
        printf("The reverse of a number is:%d",revNumber);
        printf("THE no of digit:%d",countNumber);
        return 0;
}