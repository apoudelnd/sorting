#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void merge(int arr[], int left[], int left_size, int right[], int right_size) {
    int i = 0, j = 0, k = 0;
    
    while (i < left_size && j < right_size) {
        if (left[i] <= right[j]) {
            arr[k++] = left[i++];
        } else {
            arr[k++] = right[j++];
        }
    }
    
    while (i < left_size) {
        arr[k++] = left[i++];
    }
    
    while (j < right_size) {
        arr[k++] = right[j++];
    }
}

void merge_sort(int arr[], int size) {
    if (size < 2) {
        return;
    }
    
    int mid = size / 2;
    int left[mid], right[size - mid];
    
    for (int i = 0; i < mid; i++) {
        left[i] = arr[i];
    }
    
    for (int i = mid; i < size; i++) {
        right[i - mid] = arr[i];
    }
    
    merge_sort(left, mid);
    merge_sort(right, size - mid);
    merge(arr, left, mid, right, size - mid);
}

int main() {
    // Seed the random number generator with the current time
    srand(time(NULL));
    
    // Generate a random array of 10 integers
    int arr[25000];
    
    merge_sort(arr, 25000);
    
    printf("\nSorted array\n");
    
    return 0;
}
