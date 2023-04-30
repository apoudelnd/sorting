#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void swap(int* a, int* b) {
    int t = *a;
    *a = *b;
    *b = t;
}

void selectionSort(int arr[], int n) {
    int i, j, min_idx;
    for (i = 0; i < n - 1; i++) {
        min_idx = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        swap(&arr[min_idx], &arr[i]);
    }
}

int main() {
    srand(time(0)); // initialize random seed

    int n = 10000; // size of array
    int arr[n]; // declare array of size n

    // generate random array of integers
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 10000;
    }

    // sort the array using selection sort
    selectionSort(arr, n);
    printf("done");
    

    // print the sorted array
    // printf("Sorted array: ");
    // for (int i = 0; i < n; i++) {
    //     printf("%d ", arr[i]);
    // }
    // printf("\n");

    return 0;
}