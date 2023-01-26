#include"sort.h"
#include<iostream>

using namespace std;

Sort::Sort()
{
    this->start = 0.f;
    this->end = 0.f;
    this->duration = 0.f;
}

// int* Sort::get_input_array(){
//     return this->input;
// }

void Sort::start_time(){
    this->start = clock();
}

void Sort::end_time(){
    this->end = clock();
    this->duration = (double)this->end - this->start / CLOCKS_PER_SEC;
}

void Sort::print_duration(){
    printf("Duration : %f s\n",this->duration);
}

void Sort::print_array(int *array){
    for(int i = 0; i<INPUT_NUM; i++){
        printf("%d ",array[i]);
    }
    printf("\n");
}