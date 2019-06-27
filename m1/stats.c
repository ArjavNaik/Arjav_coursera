/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file stats.c 
 * @brief C program to find mean median mode minimum and maximum of a given int array
 *
 * @author Arjav Naik
 * @date June 26 2019
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)



void main() {

  unsigned int test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */
  int k;
  int sum;
  sum = 0;
  for (k=0; k<SIZE; k++){
  	sum = sum + test[k];
  }

  print_array(test);
  int w = find_median(test);
          printf("Median is %d\n", w);
  //print_array(test);
  int x = find_minimum(test);
          printf("Minimum is %d\n", x);
  int y = find_maximum(test);
          printf("Maximum is %d\n", y);
  int z = find_mean(sum);
          printf("Average is %d\n", z);

//  print_statistics(test, sum);

}

/* Add other Implementation File Code Here */

int sort_array(int *ptr){
	int i;
	int j;
	int a;

	for (i = 0; i < SIZE; i++) 
        {
           for (j = i + 1; j < SIZE; j++)
            {
               if (ptr[i] < ptr[j]) 
                {
                    a =  ptr[i];
                    ptr[i] = ptr[j];
                    ptr[j] = a;
                }
            }
        }
    return 0;
}

int find_median(int A[]){
	sort_array(A);
	int median;
	int x;
	x  = (SIZE/2);
	median = A[x]; 
	return median;
}

int find_mean(int sum){
	return (sum/SIZE);
}

int find_maximum(int *ptr){
	int i;
	int j;
	int a;
    for (j =  1; j < SIZE; j++)
    {
        if (ptr[0] < ptr[j]) 
       {
           a =  ptr[0];
           ptr[0] = ptr[j];
           ptr[j] = a;
        }
   }
    return ptr[0];
}

int find_minimum(int *ptr){
	int i;
	int j;
	int a;
    for (j =  1; j < SIZE; j++)
    {
        if (ptr[0] > ptr[j]) 
       {
           a =  ptr[0];
           ptr[0] = ptr[j];
           ptr[j] = a;
        }
    }
    return ptr[0];
}

void print_array(int A[]) 
{ 
    int i; 
    for (i=0; i < SIZE; i++){
       printf("%d ", A[i]); 
       printf("\n"); 
   }   
} 

/*void print_statistics(int A[],int sum){
	print_array(A);
	int w = find_median(A);
	  printf("Median is %d\n", w); 
	int x = find_minimum(A);
	  printf("Minimum is %d\n", x); 
	int y = find_maximum(A);
	  printf("Maximum is %d\n", y); 
	float z = find_mean(sum);
	  printf("Average is %f\n", z); 
}*/
