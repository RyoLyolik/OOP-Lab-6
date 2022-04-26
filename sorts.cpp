#include "sorts.h"

void bubble_sort(int n, int* array) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                int t = array[j];
                array[j] = array[j + 1];
                array[j+1] = t;
            }
        }
    }
}

void bubble_sort(int n, double* array) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                double t = array[j];
                array[j] = array[j + 1];
                array[j+1] = t;
            }
        }
    }
}