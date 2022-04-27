#include "dz2.h"

void map(int* arr, unsigned  size, int(*change)(int)){
    for(int i = 0;i < size; i++){
        arr[i] = change(arr[i]);
    }
}

int abs(int a){
    if (a < 0) return -a;
    else return a;
}
void invert(int* arr, int size){
    for(int i = 0;i < size;++i)arr[i] = -arr[i];
}

void sort_arr(int* arr, int size){
    std::sort(arr, arr + size);
}

void sort_arr_desc(int* arr, int size){
    std::sort(arr, arr + size);
}