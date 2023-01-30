#include<time.h>
#define INPUT_NUM 19
#define MERGE_NUM 16

class Sort{
    private :
    clock_t start;
    clock_t end;
    double duration;
    int input[INPUT_NUM];

    public:
    Sort();
    void start_time();
    void end_time();
    void print_duration();
    void print_array(int*);
    void print_array_with_size(int, int*);
    void swap(int*, int*);
};