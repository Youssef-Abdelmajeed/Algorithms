#include <stdio.h>

#define acending    1 
#define decending   2 
#define lenght 5 
void printArray(int * arr , int size) ;
void bubbleSort(int *arr ,int size , int mode) ; 

int main (int argc ,char ** argv)
{
    int arr[lenght] = {11,22,6,4,9} ;
    printArray(arr,lenght);
    bubbleSort(arr,lenght,acending);
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