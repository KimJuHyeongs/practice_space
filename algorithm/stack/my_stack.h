class my_stack{
    private :
        int *array;
        int max_size;
        int sz;
    public :
        my_stack(int);
        void pop();
        void push(int);
        int peek();
        bool isEmpty();
        int size();
        int search(int);
};