#include "sort.h"
#include <iostream>
using namespace std;

void merge(int*, int, int, int, int);
void mergesort(int*, int, int, int);
int tmp_arr[MERGE_NUM] = {0};

int main(void){
    Sort init;
    int array[MERGE_NUM] = {7, 5, 9, 0, 3, 1, 2, 4, 8, 5, 10, 21, 15, 2, 32, 26};
    
    
    init.start_time();
    mergesort(array,0,MERGE_NUM-1,MERGE_NUM);
    init.end_time();
    init.print_array_with_size(MERGE_NUM, array);
    init.print_duration(); 

    return 0;
}

void merge(int* arr, int str, int mid, int end, int size){
    int left = str, right = mid+1, idx = left;

    while(left <= mid && right <= end){
        if(arr[left] <= arr[right]){
            tmp_arr[idx] = arr[left];
            left++;
        }else{
            tmp_arr[idx] = arr[right];
            right++;
        }
        idx++;
    }
    if(left > mid){
        while(right <= end){
            tmp_arr[idx] = arr[right];
            right++;
            idx++;
        }
    }else if(right > end){
        while(left <= mid){
            tmp_arr[idx] = arr[left];
            left++;
            idx++;
        }
    }

    for(int cp=0; cp<=end; cp++){
        arr[cp] = tmp_arr[cp];
    }
}

void mergesort(int* arr, int str, int end, int size){
    if(str < end){
        int mid = (str + end) / 2;
        mergesort(arr,str,mid,size);
        mergesort(arr, mid+1,end,size);
        merge(arr,str,mid,end,size);
    }
}