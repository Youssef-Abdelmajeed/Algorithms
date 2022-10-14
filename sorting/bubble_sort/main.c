#include"bubble_sort.h"
#define lenght 5 

int main (int argc ,char ** argv)
{
    int arr[lenght] = {11,22,6,4,9} ;
    printArray(arr,lenght);
    bubbleSort(arr,lenght,acending);
    printArray(arr,lenght);
    return 0 ;
}