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

#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 
int sort_array(int *ptr);  //To sort a given array
int find_median(int A[]);  // TO find median 
int find_mean(int sum);	   // TO find mean
int find_maximum(int *ptr); // TO find maximum
int find_minimum(int *ptr);  // TO find minimum
void print_array(int A[]);   // TO print the array


/**
 * @brief 
 *  sort_array(int *ptr);  //To sort a given array
	 find_median(int A[]);  // TO find median 
	 find_mean(int sum);	   // TO find mean
	 find_maximum(int *ptr); // TO find maximum
	 find_minimum(int *ptr);  // TO find minimum
	 print_array(int A[]);   // TO print the array
 * @param <ptr> <pointer to the array>
 * @param <A[]> <the array>
 * @param <sum> <sum of the array>
 */
