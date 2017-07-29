/* Bubble Sort algorithm test
code by douglas costa - dwcosta@gmail.com 2017 */

#include <stdio.h>

int main(){
    int DIM;
    printf("enter the size of the vector: ");
    scanf("%d",&DIM);
    int i,j,aux,n=DIM,num=DIM;
    int vector[n];

    //create a vector with a descending order, from size to 1.
    for (i = 0 ; i < n ; i++){
        vector[i] = num;
        num-=1;
    }
    //print the vector
    printf("\ndescending vector: ");
    for (i = 0 ; i < n ; i++) printf("%d ",vector[i]);
    
    //sort the vector in a ascending ordem using bubble sort
    for(i = 0 ; i < n ; i++){
        for(j = 0; j < n-1 ; j++){
            if(vector[j] > vector[j+1]) {
                aux = vector[j];
                vector[j] = vector[j+1];
                vector[j+1] = aux;
            }
        }
    }
    //print the vector
    printf("\n\nascending vector bubble sorted: ");
    for (i = 0 ; i < n ; i++) printf("%d ",vector[i]);
    printf("\n\n");
    return 0;


}