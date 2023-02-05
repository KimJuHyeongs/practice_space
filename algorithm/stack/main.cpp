#include "my_stack.h"
#include "stdio.h"

int main(void){
    my_stack a(20);

    printf("empty ? : %d\n",a.isEmpty());
    a.push(3);
    a.push(16);
    a.push(82);
    printf("Top val : %d\n",a.peek());
    printf("stack size : %d\n",a.size());

    a.push(77);
    printf("61 val ?  : %d\n", a.search(61));
    printf("16 val ?  : %d\n", a.search(16));
    a.pop();
    printf("stack size : %d\n",a.size());
    printf("empty? : %d\n",a.isEmpty());

    return 0;
}