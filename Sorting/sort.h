//Notes: instead of using header guards, you can use:
//#pragma once (see google for detail on this but it's the same but has more advantage)

#ifndef SORT_H_
#define SORT_H_
    
    
    //This allows C++ and C code to share the same header file

    #ifdef __cplusplus
        extern "C" {
    #endif

    // Common libraries
    #include <stdint.h>
    #include <stdio.h>
    #include <stdlib.h>
    
    // Common macros
    #define TRUE 1
    #define FALSE 0
    #define SUCCESS TRUE
    #define FAILURE FALSE
        
    typedef struct _sort_st {
        void* arr;
        int length;
    } SORT; 

    //Generic sort structure
    #define Sort(type)     \
            struct         \
            {              \
                type* arr; \
                int length; \
            }*
        
    #define new_sort(arr, size, type) (Sort(type) ) sort_st_init(arr, size, sizeof(type))

    SORT* sort_st_init(void**, int, int); //constructor
    void sort_st_destroy(); //destructor
    
    void get_array();
    void sort_st_bubbleSort();
    void sort_st_selectionSort();
    void sort_st_insertionSort();
    

    #ifdef __cplusplus
        }
    #endif 

#endif //SORT_H_