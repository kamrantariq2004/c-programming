#include <stdio.h>
#define SIZE 3
int main(){
int array[SIZE][SIZE];

int *ptr;

printf("Enter the value");
for (int  i = 0; i <SIZE; i++)
{
    for (int  j = 0; j <SIZE; j++)
    {   
        ptr=&array[i][j];
        scanf("%d",ptr);
        

    }
    
}
int min=array[0][0];
int max=0;
for (int  i = 0; i <SIZE; i++)
{
    for (int  j = 0; j <SIZE; j++)
    {   
        ptr=&array[i][j];
        printf("%d",*ptr);
        

    }
    printf("\n");
}
for (int  i = 0; i <SIZE; i++)
{
    for (int  j = 0; j < SIZE; j++)
    {   ptr=&array[i][j];
        if (max<*ptr)
        {
            max=*ptr;
            
        }
        else if (min>*ptr)
        {
            min=*ptr;
             
        }
        
        
    }
    
}
printf("Max is :%d\n",max);
printf("Min is :%d\n",min);






}
