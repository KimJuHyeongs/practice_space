#include<stdio.h>

#define ARRAY_NUM (19)

void heapify(int*, int*);

int main(void){
    int arr_size = ARRAY_NUM;
    int array[ARRAY_NUM] = {7, 5, 9, 0, 3, 1, 6, 2, 4, 8, 5, 18, 10, 21, 15, 2, 32, 26, 33};

    heapify(array, &arr_size);

    for(int leaf = ARRAY_NUM-1; leaf >= 0; leaf--){
        int temp = array[leaf];
        array[leaf] = array[0];
        array[0] = temp;
        arr_size--;

        heapify(array, &arr_size);
    }

    //print array
    for(int idx = 0; idx<ARRAY_NUM; idx++){
        printf("%d ",array[idx]);
    }
    printf("\n");

    return 0;
}

void heapify(int* arr, int* sz){
    for(int idx = 1; idx<*sz; idx++){
        int child = idx;
        do {
            int parent = (int)((child-1)/2);
            if(arr[parent] < arr[child]){
                int temp = arr[parent];
                arr[parent] = arr[child];
                arr[child] = temp;
            }
            child = parent;
        } while(child > 0);
    }
}