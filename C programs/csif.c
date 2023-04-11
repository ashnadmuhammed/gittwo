#include<stdio.h>
#include<stdlib.h>
int main(void){
    int num1,num2,choice,result;
    printf("enter two number");
    scanf("%d%d",&num1,&num2);
    printf("1 for adition\n 2 for substraction  \n 3 for multiplication \n 4 for division \n enter your choice");
    scanf("%d",&choice);
    if(choice==1){
        result=num1+num2;

    }else if(choice==2){
        result=num1-num2;
    }else if(choice==3){
        result=num1*num2;
    }else if(choice==4){
        result=num1/num2;
    
    }else{
        printf("foool!!!!");

    }
printf("result%d",result);
}

