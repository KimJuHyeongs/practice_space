#include "my_queue.h"
#include "stdio.h"

int main(void){
    my_queue q(30);

    printf("empty ? %d\n", q.isempty()); // 1
    q.push(61);
    q.push(135);
    q.push(111);
    q.push(45);
    printf("empty ? %d\n", q.isempty()); // 0
    printf("size : %d\n", q.size()); // 4
    printf("121 ? %d\n",q.search(121)); // -1
    printf("135 ? %d\n", q.search(135)); // 1
    q.swap(135,45);
    printf("135 ? %d\n", q.search(135)); // 3
    printf("back : %d\n",q.back()); //135
    q.pop();
    printf("back : %d\n",q.back()); //111;

}