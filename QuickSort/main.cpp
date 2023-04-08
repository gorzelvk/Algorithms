//
//  QuickSort
//
//  Created by Kacper Gorzelak on 02/04/2023.
//

#include <iostream>

void swap_elements(int* first_element, int* second_element){
    int tmp = *first_element;
    *first_element = *second_element;
    *second_element = tmp;
}

void quick_sort(int array[], int start_index, int end_index){
    int pivot = array[end_index];
    int i = start_index;
    int j = end_index;
    while(i < j){
        while(array[i] < pivot)
            i++;
        while(array[j] > pivot)
            j--;
        
        if(i <= j){
            swap_elements(&array[i], &array[j]);
            i++;
            j--;
        }
    }
    if (start_index < j)
        quick_sort(array, start_index, j);
    if (end_index > i)
        quick_sort(array, i, end_index);
}

int main() {
    int numbers[8] = { -5, 12, -3, 7, 7, 5, -28, -20 };
    int size = sizeof(numbers) / sizeof(int);
    quick_sort(numbers, 0, size - 1);
    
    for(int i = 0; i < size; i++){
        std::cout << numbers[i] << std::endl;
    }
    
    return 0;
}
