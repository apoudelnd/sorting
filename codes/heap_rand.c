#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void swap(int* a, int* b) {
    int t = *a;
    *a = *b;
    *b = t;
}

void heapify(int arr[], int n, int i) {
    int largest = i; 
    int l = 2 * i + 1; 
    int r = 2 * i + 2; 

    if (l < n && arr[l] > arr[largest]) {
        largest = l;
    }

    if (r < n && arr[r] > arr[largest]) {
        largest = r;
    }

    if (largest != i) {
        swap(&arr[i], &arr[largest]);
        heapify(arr, n, largest);
    }
}

void heapSort(int arr[], int n) {
    for (int i = n / 2 - 1; i >= 0; i--) {
        heapify(arr, n, i);
    }

    for (int i = n - 1; i >= 0; i--) {
        swap(&arr[0], &arr[i]);
        heapify(arr, i, 0);
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

    // sort the array using heap sort
    heapSort(arr, n);
    printf("done\n");
    // // print the sorted array
    // printf("Sorted array: ");
    // for (int i = 0; i < n; i++) {
    //     printf("%d ", arr[i]);
    // }
    // printf("\n");

    return 0;
}
