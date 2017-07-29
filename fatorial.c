//factorial sequence
//code by douglas costa - dwcosta@gmail.com 22/07/2017

#include <stdio.h>

long double factorial(long double num);

int main(){
    long double num;
    printf("\nenter a number: ");
    scanf("%Lf",&num);
    printf("\n%.Lf factorial is %.Lf\n\n",num,factorial(num));
    return 0;
}

long double factorial(long double num){
    long double fact = 1, i;
    for(i = 1 ; i <= num ; i++) fact*=i;
    return fact;
}