#include"bubble_sort.h"

void printArray(int * arr , int size) 
{
    printf("{ ") ;
    for(int i = 0 ; i < size ; i++)
    {
        printf("%d ",arr[i]) ; 
    }
    printf("}\n") ;
}

void bubbleSort(int *arr ,int size , int mode) 
{
    int tmp = 0 ;
    for(int i = 0 ; i<size -1 ;i++)
    {
        for(int j =0 ; j<size-1 -i ;j++)
        {
            switch (mode)
            {
            case acending:
                if(arr[j]>arr[j+1])
                {
                    tmp = arr[j] ; 
                    arr[j] = arr[j+1] ; 
                    arr[j+1] = tmp ;
                }
                break;
            case decending:
                if(arr[j]>arr[j+1])
                {
                    tmp = arr[j] ; 
                    arr[j] = arr[j+1] ; 
                    arr[j+1] = tmp ;
                }
                break;
            
            default:
                break;
            }
        }
    }
}