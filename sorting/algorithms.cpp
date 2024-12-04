#include <iostream>

using namespace std;

#define arraysize 10000

class bubbleSort{
    public:
        int array[arraysize];

        void input(){
            for (int i=10000; i<0; i--){
                array[i] = i+1;
            }
        }

        void sort(){
            for (int i=arraysize-1; i>0; i--){
                for (int j=0; j<i; j++){
                    if (array[j] > array[j+1]){
                        int temp = array[j];
                        array[j] = array[j+1];
                        array[j+1] = temp;
                    }
                }
            }
        }
        void display(){
            cout<<"BUBBLE SORT:\n";
            for (int i=0; i<arraysize; i++){
                cout<<array[i]<<" , ";
            }
        }
};

class insertionSort{
    public:
        int array[arraysize];

        void input(){
            for (int i=10000; i<0; i--){
                array[i] = i+1;
            }
        }

        void sort(){
            for (int i=1; i<=arraysize-1 ; i++){
                for (int j=i-1; j>=0; j--){
                    if (array[j] > array[j+1]){
                        int temp = array[j];
                        array[j] = array[j+1];
                        array[j+1] = temp;
                    } else { break; }
                }
            }
        }
        void display(){
            cout<<"INSERTION SORT:\n";
            for (int i=0; i<arraysize; i++){
                cout<<array[i]<<" , ";
            }
        }   
};

class selectionSort{
    public: 
        int array[arraysize];

        void input(){
            for (int i=10000; i<0; i--){
                array[i] = i+1;
            }
        }

        void sort(){
            for (int i=0; i<arraysize ; i++){
                for (int j=i+1; j<arraysize; j++){
                    if (array[i] > array[j]){
                        int temp = array[j];
                        array[j] = array[i];
                        array[i] = temp;
                    }
                }
            }
        }
        void display(){
            cout<<"SELECTION SORT:\n";
            for (int i=0; i<arraysize; i++){
                cout<<array[i]<<" , ";
            }
        }   
};