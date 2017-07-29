//fibonacci sequence list
//code by douglas costa - dwcosta@gmail.com - 22/07/2017
//it generates a vector using dinamic allocation for how many numbers you wanna list.


#include <stdio.h>
#include <stdlib.h>

int main(){
    long double n;
    long int i;
    printf("\nenter how many numbers you wanna list: ");
    scanf("%Lf",&n);
    if (n<=0){
        printf("\nenter a positive number\n\n");
        exit(1);
    }
    if (n==1){
        printf("\nsequence: 0\n\n");
        exit(1);
    }
    //if (n>93){
      //  printf("\ntoo high to list. max 93\n\n");
        //exit(1);
    //}
    if (n > 2){
        long double *p = malloc(n*sizeof(long double));
        if(p == NULL){
            printf("\nERROR - insuficient memory!\n");
            exit(1);
        }
        p[0] = 0;
        p[1] = 1;
        for(i = 2 ; i < n ; i++) p[i] = p[i-1] + p[i-2];
        printf("\n\n");
        for(i = 0 ; i < n ; i++) printf("%.LF\n",p[i]);
        printf("\n\n");
        
    }
    
}