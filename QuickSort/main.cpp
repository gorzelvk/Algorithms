//
//  QuickSort
//
//  Created by Kacper Gorzelak on 02/04/2023.
//

#include <iostream>

void swapElements(int* firstElement, int* secondElement){
    int tmp = *firstElement;
    *firstElement = *secondElement;
    *secondElement = tmp;
}

void quickSort(int array[], int start_index, int end_index){
    int pivot = array[end_index];
    int i = start_index;
    int j = end_index;
    while(i <= j){
        while(array[i] < pivot)
            i++;
        while(array[j] > pivot)
            j--;
        
        if(i <= j){
            swapElements(&array[i], &array[j]);
            i++;
            j--;
        }
    }
    if (start_index < j)
        quickSort(array, start_index, j);
    if (end_index > i)
        quickSort(array, i, end_index);
}

int main() {
    int numbers[8] = { -5, 12, -3, 4, 7, 5, 9, -20 };
    int size = sizeof(numbers) / sizeof(int);
    quickSort(numbers, 0, size - 1);
    
    for(int i = 0; i < size; i++){
        std::cout << numbers[i] << std::endl;
    }
    
    return 0;
}
