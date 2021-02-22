#include "sort.h"

#define SIZE 6
int main( void ) {
    
    double arr[SIZE] = {45.1, 19.2, 34.3, 0.4, -1.5, 7.5};
    Sort(double) sorter = new_sort((void**) &arr, SIZE, double);
    printf("%ld\n", sizeof(sorter->arr[0]));
    
    return EXIT_SUCCESS;
}