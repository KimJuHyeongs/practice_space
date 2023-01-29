#include "sort.h"
#include <iostream>
using namespace std;

#define INPUT_NUM 19

int main(void)
{
    Sort init;
    int input[INPUT_NUM] = {7, 5, 9, 0, 3, 1, 6, 2, 4, 8, 5, 18, 10, 21, 15, 2, 32, 26, 33};
    int i = 0, j = 0;

    init.start_time();
    for (i = 0; i < (INPUT_NUM-1); i++){
        int min_val = 9999, min_idx = 0, tmp_val = 0;
        for (j = i; j < INPUT_NUM; j++){
            if ( min_val > input[j]){
                min_val = input[j];
                min_idx = j;
            }
        }
        
        init.swap(&input[i],&input[min_idx]);
    }
    init.end_time();

    init.print_array(input);
    init.print_duration();
}