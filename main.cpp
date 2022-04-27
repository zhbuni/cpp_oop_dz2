#include <iostream>
#include "dz2.h"



int sum_of_array(int *arr, unsigned size){
    int sum;
    for(int i = 0;i < size;++i)sum += arr[i];
    return sum;
}

void(*action_on_arr(int* arr, int size))(int* arr, int size)
{
    int sum = sum_of_array(arr, size);
    if (sum == arr[0])
        return invert;
    else if(sum > arr[0])
        return sort_arr;
    else return sort_arr_desc;
}
int main(){
    int arr[5] = {3, 5, 1, 2, 3};
    for(int i = 0;i < 5;++i) std::cout << arr[i] << " ";
    std::cout << '\n';

    void (*action)(int* arr, int size);

    action = action_on_arr(arr, 5);
    action(arr, 5);
    for(int i = 0;i < 5;++i) std::cout << arr[i] << " ";
}