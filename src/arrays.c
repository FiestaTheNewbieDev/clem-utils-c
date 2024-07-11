#include <stdlib.h>
#include "arrays.h"

void swap(int *tab, int i, int j) {
    int temp = tab[i];
    tab[i] = tab[j];
    tab[j] = temp;
}

int* bubbleSort(int *tab, int length) {
    int* temp = (int*)malloc(length * sizeof(int));
    memcpy(temp, tab, length * sizeof(int));

    for (int i = 0; i < length; i++) {
        int swapped = 0;
        for (int j = 0; j < length - i - 1; j++) {
            if (temp[j] > temp[j + 1]) {
                swap(temp, j, j + 1);
                swapped = 1;
            }
        }
        if (!swapped) {
            break;
        }
    }

    return temp;
}