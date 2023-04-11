#include<stdio.h>
#include<stdlib.h>
int main(void){
    int  i,j,rowLimit = 10;
    for ( i = 1; i <=rowLimit;i++)
    {
        for(j=1;j<=i;j++){
        printf("* ");
    }
  printf("\n"); 
    } 
}