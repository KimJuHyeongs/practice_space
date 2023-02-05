#include <stdio.h>

#define ARRAY_NUM (19)

void quick_sort(int*, int, int);
void median_quick_sort(int*, int, int);

int main(void){
    int array[ARRAY_NUM] = {7, 5, 9, 0, 3, 1, 6, 2, 4, 8, 5, 18, 10, 21, 15, 2, 32, 26, 33};

    median_quick_sort(array,0,ARRAY_NUM-1);

    for(int idx=0; idx<ARRAY_NUM; idx++) printf("%d ",array[idx]);
    printf("\n");

    return 0;
}

void quick_sort(int* arr, int start, int end){
    if (start >= end) return;

    int pivot = start;
    int left = pivot + 1;
    int right = end;

    while (left <= right){
        while(arr[left] <= arr[pivot] && left <= end){
            left++;
        }
        while(arr[pivot] <= arr[right] && right > start){
            right--;
        }

        if(left <= right){
            int temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
        }
        else{
            int temp = arr[pivot];
            arr[pivot] = arr[right];
            arr[right] = temp;
        }
    }

    quick_sort(arr, start, right - 1);
    quick_sort(arr, right + 1, end);
}

void median_quick_sort(int* arr, int start, int end){
    if(start >= end) return;

    int mid = (int)((start + end)/2);
    int max_idx = 0;
    // Sort left, mid, right value
    if(arr[start] > arr[mid]){
        int temp = arr[start];
        arr[start] = arr[mid];
        arr[mid] = temp;
    }
    if(arr[mid] > arr[end]){
        int temp = arr[mid];
        arr[mid] = arr[end];
        arr[end] = temp;
    }

    int temp = arr[mid];
    arr[mid] = arr[end];
    arr[end] = temp;

    int pivot = end;
    int left = start;
    int right = pivot - 1;

    while(left <= right){
        while(arr[left] <= arr[pivot] && left < end){
            left++;
        }
        while(arr[pivot] <= arr[right] && right >= start){
            right--;
        }

        if(left <= right){
            int temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
        }
        else{
            int temp = arr[pivot];
            arr[pivot] = arr[left];
            arr[left] = temp;
        }
    }

    median_quick_sort(arr, start, left - 1);
    median_quick_sort(arr, left + 1, end);
}