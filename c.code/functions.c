#include<stdio.h>

void rotateArrayLeft(int arr[], int size, int positions) {
    int temp[positions];

    // Store the first 'positions' elements in a temporary array
    for (int i = 0; i < positions; i++) {
        temp[i] = arr[i];
    }

    // Shift the remaining elements to the left
    for (int i = 0; i < size - positions; i++) {
        arr[i] = arr[i + positions];
    }

    // Copy the elements from the temporary array back to the end of the original array
    for (int i = 0; i < positions; i++) {
        arr[size - positions + i] = temp[i];
    }
}