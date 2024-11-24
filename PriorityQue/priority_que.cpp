#include <iostream>
using namespace std;
#define array_size 50

class plane{
    private:
        char flight_no[array_size] = {'\0'};
        int priority;
    public:
        plane(char* f_no, int pri) : priority(pri) {
            for (int i=0; i<array_size; i++){
                flight_no[i] = f_no[i];
            }
        }

        char* getFlightNo(){
            return flight_no; 
        }
    
        int getFlightPriority(){
            return priority;
        }
};  

class priorityQue{
    
    private:
        plane* array[array_size] = {nullptr};
        int front = 0;
        int rear = 0;
    
    public:
        int que_size = 0;

        void addFlights(int num){
            char flightname[array_size];
            int pri;
            for (int i=0; i<num; i++){
                cout<<"Flight "<<i+1<<": \n";
                cout<<"Flight number: ";
                cin>>flightname;
                cout<<"Flight priority: ";
                cin>>pri;
                enque(flightname,pri);
            }
        }

        void enque(char* fli_name, int prio){
            plane* newflight = new plane(fli_name,prio);
            if (que_size == 0){
                array[rear] = newflight;
                que_size++;
            } else{
                rear = (rear+1) % array_size;
                array[rear] = newflight;
                que_size++;
            }
        }

        plane* deque(){
            for (int i=0 ; i<array_size; i++){
                if (array[i] != nullptr){
                    for (int j=i+1; j<array_size; j++){
                        plane* temp = nullptr;
                        if (array[j] != nullptr){
                            if (array[i]->getFlightPriority() < array[j]->getFlightPriority()){
                                temp = array[i];
                                array[i] = array[j];
                                array[j] = temp;
                            }
                        }
                    }
                }
            }
            plane* landed = array[front];
            array[front] = nullptr;
            front = (front+1) % array_size;
            return landed;
        }

        plane* next(){
            return array[(front+1)%array_size];
        }           
        
};

