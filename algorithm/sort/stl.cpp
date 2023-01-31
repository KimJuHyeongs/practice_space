#include <iostream>
#include <algorithm>

#define ARR_SIZE (10)

using namespace std;

bool compare(int, int);

int main(void){
    int arr[ARR_SIZE] = {1,6,7,5,4,8,9,2,3,10};

    //기본 사용
    sort(arr, arr+ARR_SIZE);
    //오름차순 정렬 & 내림차순 정렬
    sort(arr, arr+ARR_SIZE, compare);

    for(int idx=0; idx<ARR_SIZE; idx++){
        printf("%d ", arr[idx]);
    }
    printf("\n");
}

//오름차순
bool compare(int first, int second){
    return (first < second);
}

//내림차순
bool compare(int first, int second){
    return (first > second);
}