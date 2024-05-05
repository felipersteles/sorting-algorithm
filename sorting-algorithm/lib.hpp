//
//  lib.hpp
//  sorting-algorithm
//
//  Created by Felipe Teles on 30/04/24.
//

#ifndef lib_hpp
#define lib_hpp

#include <stdio.h>

void merge_sort(int array[], int const begin, int const end);
void quick_sort(int arr[], int start, int end);
void bubble_sort(int arr[], int n);
void print_array(int A[], int size);
int* get_array(int arrLength);

#endif /* lib_hpp */
