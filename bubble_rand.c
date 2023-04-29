#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int swapped = 0;

        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1;
            }
        }

        if (swapped == 0) {
            break;
        }
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

    // sort the array using bubble sort
    bubbleSort(arr, n);

    // print the sorted array
    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}