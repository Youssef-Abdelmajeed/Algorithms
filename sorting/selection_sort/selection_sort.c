#include "selection_sort.h"
void printArray(int * arr , int size) 
{
    printf("{ ") ;
    for(int i = 0 ; i < size ; i++)
    {
        printf("%d ",arr[i]) ; 
    }
    printf("}\n") ;
}

void selectionSort(int *arr ,int size , int mode) 
{
     int *current ; 

    for(int i = 0 ; i< size ; i++)
    {
        /*increment the current pointer */
        current = arr+i ;
        for (int j = i+1 ; j< size ; j++ )
        {
            switch (mode)
            {
            case accending:
                if(*current> arr[j])
                {
                    /*swap*/
                    int tmp = *current ; 
                    *current  =   arr[j];
                    arr[j] = tmp ;
                }
                break;
            case deccending:
                if(*current< arr[j])
                {
                    /*swap*/
                    int tmp = *current ; 
                    *current  =   arr[j];
                    arr[j] = tmp ;
                }
                break;
            default:
                break;
            }
       
        }
    }
}