#include <stdio.h>

#define ARRAY_NUM (19)
#define MAX_VAL (33)

int main(void){
    int array[ARRAY_NUM] = {7, 5, 9, 0, 3, 1, 6, 2, 4, 8, 5, 18, 10, 21, 15, 2, 32, 26, 33};
    int count[MAX_VAL + 1] = {0};

    for(int idx = 0; idx<ARRAY_NUM; idx++){
        count[array[idx]]++;
    }

    for(int idx = 0; idx<(MAX_VAL+1); idx++){
        while(count[idx]){
            printf("%d ",idx);
            count[idx]--;
        }
    }
    printf("\n");
}