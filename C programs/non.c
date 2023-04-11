
#include<stdio.h>
#include<stdlib.h>
int main(void){

    int a=10,b=30,temp;
    temp=a;
    a=b;
    b=temp;
    printf("a:%d,b:%d",a,b);
}
{
    printf("ashnad");
}
{
    int num;
    printf("enter a number");
    scanf("%d",&num);
    if(num<0){
        printf("number is negetive");
    }else{
        printf("number is positive");
    
    }
}
{
    int physics,chemistry,biology,maths,comp;
    float per;
    printf("enter five subject marks:");
    scanf("%d%d%d%d%d",&physics,&chemistry,&biology,&maths,&comp);
    per=(physics+chemistry+biology+maths+comp)/5;
    printf("percentage=%.2f/n",per);
    if(per >=90){
        printf("grade A");
    }else if(per>=80){
        printf("grade B");
    }else if (per>=70){
        printf("grade C");
    }else if(per>=60){
        printf("grade D");
    }else if(per>=40){
        printf("grade E");
    }else{
        printf("GRADE F");
    }
}