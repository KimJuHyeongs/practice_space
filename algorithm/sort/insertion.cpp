#include "sort.h"
#include <iostream>

using namespace std;

int main(void){
    Sort init;
    int array[INPUT_NUM] = {7, 5, 9, 0, 3, 1, 6, 2, 4, 8, 5, 18, 10, 21, 15, 2, 32, 26, 33};

    init.start_time();
    for(int row=0; row<(INPUT_NUM-1);row++){
        int col = row;
        while(array[col] > array[col+1]){
            init.swap(&array[col],&array[col+1]);
            col--;
            if(col < 0) break;
        }
    }
    init.end_time();

    init.print_array(array);
    init.print_duration();

    return 0;
}