#include <iostream>
#include<algorithm>

#define MAX_NUM 1000000

int val[MAX_NUM] = {0};

int main(void){
    int input_num;

    scanf("%d",&input_num);
    for(int i=0; i<input_num;i++) scanf("%d",&val[i]);

    std::sort(val, val + input_num);

    for(int i=0; i<input_num;i++) printf("%d\n",val[i]);
}