
#include "selection_sort.h"

#define lenght          5 

int main(int argc , char *argv[])
{
    int arr[lenght] = {11,22,6,4,9} ;
    printArray(arr,lenght);
    selectionSort(arr,lenght,accending);
    printArray(arr,lenght);

    return 0 ; 
}