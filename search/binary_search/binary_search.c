#include <stdio.h>
#include "bubble_sort.h"
/**
 * @brief binary search algorithm 
 * 
 * @param arr 
 * @param size 
 * @param n number to search in the arr for
 * @return int int -1 if not found & index otherwis
 */
int binary_search(int *arr, int size, int n)  ;

#define lenght 5 
int main (int argc ,char *argv[])
{
    int arr[lenght] = {11, 22 ,6 ,4 ,9 };
    
    /* sort array */
    bubbleSort(arr,lenght,acending) ; 
    printArray(arr,lenght) ;

    printf("found at index %d \n", binary_search(arr,5,22));
    
    return 0 ; 
}

int binary_search(int *arr, int size, int n)  
{
    /* index = -1 if not found */
    int index = - 1 ; 

   
    int start = 0 , end = size -1, mid = 0 ;
   
    while (!(start==end&&end==mid))
    {
        /* calculate new mid */
        mid =(start+end) / 2 ;
        if(n == arr[mid])
        {
            index = mid;
            return mid ;
        }
        else if (n >arr[mid]) 
        {
            start = mid + 1 ;
        }
        else 
        {
            end = mid - 1 ;
        }
    }
    
    return index ;

}
