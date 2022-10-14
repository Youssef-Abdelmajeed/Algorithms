#ifndef BUBBLE_H_
#define BUBBLE_H_
#include <stdio.h>

#define acending    1 
#define decending   2 
/**
 * @brief function to print integers arrays 
 * 
 * @param arr 
 * @param size 
 */
void printArray(int * arr , int size) ;
/**
 * @brief bubble sort algorithm 
 * 
 * @param arr 
 * @param size 
 * @param mode accending deccending 
 */
void bubbleSort(int *arr ,int size , int mode) ; 

#endif /* BUBBLE_H_ */