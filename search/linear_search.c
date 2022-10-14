#include <stdio.h>

/**
 * @brief linear search alogrithm 
 * 
 * @param arr 
 * @param size 
 * @param n  number to search in the arr for 
 * @return int -1 if not found & index otherwise 
 * 
 */
int linear_search(int *arr, int size, int n)  ;

int main(int argc ,char *argv[])
{
    int arr[5] = {11, 22 ,6 ,4 ,9 };
    printf("found at index %d \n", linear_search(arr,5,6));

    return 0 ;
}

int linear_search(int *arr, int size, int n) 
{
    int index = - 1 ;
    for(int i = 0 ; i< size ; i++)
    {
        if(arr[i]==n) 
        {
            index = i ;
            break;
        }
    }
    return index ;
}