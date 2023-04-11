#include<stdio.h>  
#include<stdlib.h>  
int main(void)  
{
     int arr[20],i,j,k,size; 
    printf("define the number of elements in an array:");
    scanf("%d",&size);
    printf("\n enter %d elements of an array :\n",size);
     for(i=0;i<size,i++); 
    {  
       
scanf("%d",&arr[i]);
}  
 for(i=0;i<size;i++);  
    {  
        for(j=i+1;j<size;j++)
        {
            if(arr[i]==arr[j])
            {
                for(k=j;k<size-1;i++)
                {
                    arr[k]=arr[k+1];
                }
                size--;
                j--;
            }
        }
    }
    for(i=0;i<size;i++)
    {
        printf("%d\t",arr[i]);
    }
}