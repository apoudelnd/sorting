#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void insertionSort(int arr[], int n) {
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int main() {
    srand(time(0)); // initialize random seed

    int n = 1500; // size of array
    int arr[n]; // declare array of size n

    // generate random array of integers
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 1500;
    }

    // sort the array using insertion sort
    insertionSort(arr, n);
    printf("done\n");

    // print the sorted array
    // printf("Sorted array: ");
    // for (int i = 0; i < n; i++) {
    //     printf("%d ", arr[i]);
    // }
    // printf("\n");

    return 0;
}
