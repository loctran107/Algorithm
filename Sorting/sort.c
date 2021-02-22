#include "sort.h"


SORT* sort_st_init(void** arr, int length, int size_of_element) {
    SORT* new_arr = malloc(sizeof(SORT));
    new_arr->arr = arr;
    new_arr->length = length;
    return new_arr;
    
}


void bubbleSort(int* arr, int length) {
}

void selectionSort(int* arr, int length) {
    
}

void insertionSort(int* arr, int length) {

}

