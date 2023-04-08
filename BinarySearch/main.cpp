//
//  BinarySearch
//
//  Created by Kacper Gorzelak on 02/04/2023.
//

#include <iostream>

int binary_search(int numbers[], int array_size, int sought_value){
    int low_index = 0;
    int high_index = array_size - 1;
    int mid_index = (high_index - low_index)/2;
    while(true){
        mid_index = (high_index + low_index)/2;
        if(numbers[mid_index] < sought_value){
            low_index = mid_index + 1;
        }
        else if (numbers[mid_index] > sought_value){
            high_index = mid_index - 1;
        }
        else{
            return mid_index;
        }
    }
}

int main(){
    int numbers[10] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };
    std::cout << binary_search(numbers, 10, 70) << std::endl; // returns index of sought Value
    return 0;
}
