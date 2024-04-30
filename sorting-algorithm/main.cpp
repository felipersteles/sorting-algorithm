//
//  main.cpp
//  sorting-algorithm
//
//  Created by Felipe Teles on 30/04/24.
//

#include <iostream>
#include "lib.hpp"

using namespace std;

int main(int argc, const char * argv[]) {
    int arr[] = { 12, 11, 13, 5, 6, 7 };
    int arr_size = sizeof(arr) / sizeof(arr[0]);
    
    cout << "Select a algorithm to see it time to sort the array:" << endl;
    print_array(arr, arr_size);

    merge_sort(arr, 0, arr_size - 1);

    cout << "\nSorted array by Merge Sort is \n";
    print_array(arr, arr_size);
    cout << "\nAnd it happened in x time";
    
    return 0;
}
