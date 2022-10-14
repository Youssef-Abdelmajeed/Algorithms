#include <stdio.h>

#define lenght 5 

void printArray(int * arr , int size) ;
void selectionSort(int * arr , int size);
int main(int argc , char *argv[])
{
    int arr[lenght] = {11,22,6,4,9} ;
    printArray(arr,lenght);
    selectionSort(arr,lenght);
    printArray(arr,lenght);

    return 0 ; 
}

void printArray(int * arr , int size) 
{
    printf("{ ") ;
    for(int i = 0 ; i < size ; i++)
    {
        printf("%d ",arr[i]) ; 
    }
    printf("}\n") ;
}

void selectionSort(int * arr , int size)
{
     int *current ; 

    for(int i = 0 ; i< size ; i++)
    {
        /*increment the current pointer */
        current = arr+i ;
        for (int j = i+1 ; j< size ; j++ )
        {
            if(*current< arr[j])
            {
                /*swap*/
                int tmp = *current ; 
                *current  =   arr[j];
                arr[j] = tmp ;
            }
        }
    }
}