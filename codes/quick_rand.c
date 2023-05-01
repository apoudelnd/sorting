#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void swap(int* a, int* b) {
    int t = *a;
    *a = *b;
    *b = t;
}

int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main() {
    srand(time(0)); // initialize random seed

    int n = 500000; // size of array
    int arr[n]; // declare array of size n

    // generate random array of integers
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 500000;
    }

    // sort the array using quick sort
    quickSort(arr, 0, n - 1);
    printf("done\n");

    // print the sorted array
    // printf("Sorted array: ");
    // for (int i = 0; i < n; i++) {
    //     printf("%d ", arr[i]);
    // }
    // printf("\n");

    return 0;
}
