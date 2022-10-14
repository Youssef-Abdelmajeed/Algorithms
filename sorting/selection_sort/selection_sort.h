#ifndef SELECTION_H_
#define SELECTION_H_
#include <stdio.h>

#define  accending      1 
#define  deccending     2         
/**
 * @brief function to print integers arrays 
 * 
 * @param arr 
 * @param size 
 */
void printArray(int * arr , int size) ;
/**
 * @brief selection sort algorithm 
 * 
 * @param arr 
 * @param size 
 * @param mode accending deccending 
 */
void selectionSort(int *arr ,int size , int mode) ;
#endif /* SELECTION_H_ */