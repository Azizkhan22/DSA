#ifndef que_h
#define que_h

class patient{
    private:
        int id;
        int priority;
    public:
        patient(int i, int p);
        int getId();
        int getpri();
        void setPri(int);
};  

class que{
    
    private:
        const int array_size = 10;
        patient* array[10];
        int size = 0;
        int auto_id = 0;
    
    public:
        patient** front = array;
        patient** back = array;
        void display();
        void enque(int p);
        int get_auto_id();
        patient* deque();
        void clear();   
        bool isEmpty();
        bool isFull();
        patient* firstElement();
        
        
};

#endif



