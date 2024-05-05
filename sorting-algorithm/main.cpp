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
    
    int arrLength;
    cout << "Inform the size of array: ";
    cin >> arrLength;
    
    cout << "Inform the numbers:" << endl;
    int* intArr = get_array(arrLength);
    
    
    int menu = -1;
    clock_t start, end;
    double time_taken;
    
    while(menu!=0){
        
        cout << "Select a algorithm to see it time to sort the array:" << endl;
        cout << "[1] Merge Sort" << endl;
        cout << "[2] Quick Sort"<< endl;
        cout << "[3] Bubble Sort"<< endl;
        cout << "[0] Sair"<< endl;
        cout << "Select: ";
        cin >> menu;

        switch (menu) {
            case 1:
                start = clock();
                merge_sort(intArr, 0, arrLength - 1);
                end = clock();
                
                time_taken = double(end - start) / double(CLOCKS_PER_SEC);
                cout << "\nSort array by Merge Sort takes "<< fixed
                << time_taken << " sec ";
                
                menu = 0;
                break;
                
            case 2:
                start = clock();
                quick_sort(intArr, 0, arrLength - 1);
                end = clock();
                
                time_taken = double(end - start) / double(CLOCKS_PER_SEC);
                cout << "\nSort array by Quick Sort takes "<< fixed
                << time_taken << " sec ";
                
                menu = 0;
                break;
            
            case 3:
                
                start = clock();
                bubble_sort(intArr, arrLength);
                end = clock();
                
                time_taken = double(end - start) / double(CLOCKS_PER_SEC);
                cout << "\nSort array by Bubble Sort takes "<< fixed
                << time_taken << " sec ";
                
                menu = 0;
                break;
                
            default:
                break;
        }
    }
    


    
    print_array(intArr, arrLength);
    delete intArr; // desaloca memoria
    
    cout << endl;
    return 0;
}


