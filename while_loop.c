#include<stdio.h>
int main(){
    int inputNumber=0;
    printf("Enter a number:\n");
    scanf("%d",&inputNumber);
    int i=0;
    while(i<=inputNumber){
        printf("%d\n",i);
        i++;
    }
    return 0;
}