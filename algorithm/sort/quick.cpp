#include "sort.h"
#include <iostream>

using namespace std;

void quick(Sort, int*, int, int);

int main(){
    Sort init;
    int array[INPUT_NUM] = {7, 5, 9, 0, 3, 1, 6, 2, 4, 8, 5, 18, 10, 21, 15, 2, 32, 26, 33};

    init.start_time();
    quick(init, array,0,INPUT_NUM-1);
    init.end_time();
    
    init.print_array(array);
    init.print_duration();

    return 0;
}

void quick(Sort init, int* array, int l, int r){
    if(l >= r) return;

    int p = l;
    int left = p+1, right = r;

    while(left <= right){
        while(array[p] >= array[left]){
            left++;
        }
        while(array[p] <= array[right] && right > l){
            right--;
        }
        if (left < right){
            init.swap(&array[left],&array[right]);
        }
        else {
            init.swap(&array[right],&array[p]);
        }
    }

    quick(init, array, l, right-1);
    quick(init, array, right+1, r);
}