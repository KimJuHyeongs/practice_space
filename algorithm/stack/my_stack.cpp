#include "my_stack.h"
#include<string>
#include <stdlib.h>
#include <stdio.h>

my_stack::my_stack(int max_sz):max_size(max_sz), sz(-1){
    this->array = (int*)malloc(sizeof(int)*max_sz);
    memset(this->array, -1 ,sizeof(int)*max_sz);
}

void my_stack::pop(){
    this->array[this->sz] = -1;
    this->sz--;
}

void my_stack::push(int val){
    this->sz++;
    this->array[this->sz] = val;
}

int my_stack::peek(){
    return this->array[this->sz];
}

bool my_stack::isEmpty(){
    if (this->sz > -1) return false;
    else return true;
}

int my_stack::size(){
    return this->sz + 1;
}

int my_stack::search(int val){
    if (!this->isEmpty()){
        for(int idx = 0; idx <= this->sz; idx++){
            if(this->array[idx] == val) return idx;
        }
        return -1;
    }
    else {
        return -1;
    }
}