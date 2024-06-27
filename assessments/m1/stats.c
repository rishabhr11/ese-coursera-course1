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
 * @file <Add File Name> 
 * @brief <Add Brief Description Here >
 *
 * <Add Extended Description Here>
 *
 * @author <Add FirsName LastName>
 * @date <Add date >
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};
void print_statistics(unsigned char *data, unsigned int size) {
    unsigned char min = find_minimum(data, size);
    unsigned char max = find_maximum(data, size);
    unsigned char mean = find_mean(data, size);
    unsigned char median = find_median(data, size);

    printf("Statistics:\n");
    printf("Minimum: %d\n", min);
    printf("Maximum: %d\n", max);
    printf("Mean: %d\n", mean);
    printf("Median: %d\n", median);
}

void print_array(unsigned char *data, unsigned int size) {
    printf("Array:\n");
    for (int i = 0; i < size; ++i) {
        printf("%d ", data[i]);
    }
    printf("\n");
}

unsigned char find_median(unsigned char *data, unsigned int size) {
    // Implementation of median calculation goes here
    // You need to implement the median calculation logic
    // This is a placeholder
    return 0;
}

unsigned char find_mean(unsigned char *data, unsigned int size) {
    unsigned int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += data[i];
    }
    return sum / size;
}

unsigned char find_maximum(unsigned char *data, unsigned int size) {
    unsigned char max = data[0];
    for (int i = 1; i < size; ++i) {
        if (data[i] > max) {
            max = data[i];
        }
    }
    return max;
}

unsigned char find_minimum(unsigned char *data, unsigned int size) {
    unsigned char min = data[0];
    for (int i = 1; i < size; ++i) {
        if (data[i] < min) {
            min = data[i];
        }
    }
    return min;
}

void sort_array(unsigned char *data, unsigned int size) {
    // Implementation of sorting algorithm goes here
    // You need to implement the sorting algorithm (e.g., bubble sort, quicksort)
    // This is a placeholder

}

/* Add other Implementation File Code Here */
