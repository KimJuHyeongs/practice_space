#include "my_queue.h"
#include "stdio.h"
#include "string.h"
#include "stdlib.h"

my_queue::my_queue(int max_sz) : max_sz(max_sz), sz(-1){
    array = (int*)malloc(sizeof(int)*max_sz);
    memset(array, -1, sizeof(int)*max_sz);
}

my_queue::~my_queue(){
    free(this->array);
}

void my_queue::push(int val){
    this->sz++;
    array[this->sz] = val;
}

void my_queue::pop(){
    array[this->sz] = -1;
    this->sz--;
}

int my_queue::size(){
    return this->sz + 1;
}

bool my_queue::isempty(){
    if (this->sz > -1) return false;
    else return true;
}

int my_queue::front(){
    if(this->isempty()){
        return this->array[0];
    }
    else{
        return -1;
    }
}

int my_queue::back(){
    if(!this->isempty()){
        return this->array[this->sz];
    }
    else{
        return -1;
    }   
}

void my_queue::swap(int f, int s){
    if (this->size() < 2) return;

    int f_idx = -1, s_idx = -1;
    for(int idx = 0; idx <= this->sz; idx++){
        if(this->array[idx] == f) f_idx = idx;
        else if(this->array[idx] == s) s_idx = idx;
    }

    if(f_idx == -1 || s_idx == -1) return;

    int temp = this->array[f_idx];
    this->array[f_idx] = this->array[s_idx];
    this->array[s_idx] = temp;
}

int my_queue::search(int val){
    if (this->isempty()) return -1;

    for(int idx=0; idx<=this->sz; idx++){
        if (this->array[idx] == val) return idx;
    }
    return -1;
}