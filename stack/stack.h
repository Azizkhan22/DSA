#ifndef stack_h
#define stack_h

class stack{
    private:
        char array[100];
        char* top;
        int size;
    public:
        stack();
        void push(char value);
        int pop();
        bool isEmpty();
        bool isFull();
        void peak();
        void display();
        void check_exp(char* exp);
};

#endif 