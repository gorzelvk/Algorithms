//
//  RecursiveArraySum
//
//  Created by Kacper Gorzelak on 08/04/2023.
//

#include <iostream>

int recursive_array_sum(int *array, int size){
    int sum = 0;
    
    // default case
    if(size == 1)
        return array[0];
    // recursive case
    else{
        size -= 1;
        sum = array[size] + recursive_array_sum(array, size);
    }
    return sum;
}

int main() {
    int array[] = { -17, 2, 7, 10, 5 };
    int size = sizeof(array) / sizeof(int);
    std::cout << recursive_array_sum(array, size) << std::endl;
    return 0;
}
