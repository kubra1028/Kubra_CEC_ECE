#include<stdio.h>
int main(){
    int inputNumber=0;
    printf("Enter a number:\n");
    scanf("%d",&inputNumber);
    int i=0;
    do{
        printf("%d\n",i);
        i++;
    }while(i<=inputNumber);
    return 0;
}