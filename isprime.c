
// primality test
// code by douglas costa - dwcosta@gmail.com - 23/07/2017
// this code only works with int range of numbers yet. will be refine later.

#include <stdio.h>

int isprime(unsigned long n);

int main(){
    unsigned long num;
    printf("\nenter a number to verify if it's prime or not\nnumber: ");
    scanf("%ld",&num);
    if (isprime(num) == 0) printf("\nit's not prime.\n\n");
    if (isprime(num) == 1) printf("\nit's prime.\n\n");
}

//isprime() function
//it returns 0 if it's not a prime, or 1 if it's a prime number.
int isprime(unsigned long n){
    int i,divi=0;
    if ((n % 2 == 0) && (n != 2)) return 0;

    if ((n % 2 != 0) || (n == 2)){
        if (n == 2) return 1;
        if (n % 2 != 0){
            for(i = 1 ; i <= n ; i+=2){
                if(n % i == 0) divi+=1;
            }
        }
        if (divi == 2) return 1;
        if (divi > 2) return 0;
    }
    return 0;
}