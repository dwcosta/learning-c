//factorial sequence
//code by douglas costa - dwcosta@gmail.com 22/07/2017

#include <stdio.h>

long int factorial(long int num);

int main(){
    int num;
    printf("\nenter a number: ");
    scanf("%d",&num);
    printf("\n%d factorial is %ld\n\n",num,factorial(num));
    return 0;
}

long int factorial(long int num){
    long int fact = 1;
    int i;
    for(i = 1 ; i <= num ; i++) fact*=i;
    return fact;
}