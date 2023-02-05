class my_queue{
    private:
        int *array;
        int max_sz;
        int sz;
    public:
        my_queue(int);
        ~my_queue();
        void push(int);
        void pop();
        int front();
        int back();
        int size();
        bool isempty();
        void swap(int, int);
        int search(int);
};