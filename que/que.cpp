#include <iostream>
#include "que.h"
using namespace std;

patient::patient(int i, int p): id(i), priority(p) {}

void patient::setPri(int val){
    priority = val;
}

int patient::getId(){
    return id;
}

int patient::getpri(){
    return priority;
}
int que::get_auto_id(){
    ++auto_id;
    return auto_id;
}

void que::enque(int p){
    if (size == 0){
        patient* newpatient = new patient(get_auto_id(),p);
        *back = newpatient; 
        size++;
        return;
    }
    else if (size == 10){
        cout<<"The Que is full\n";
        return;
    }
    else{
        patient* newpatient = new patient(get_auto_id(),p);
        back++;
        *back = newpatient;
        size++;
        return;
    }
}

void que::display(){
    for (int i=0; i<size; i++){
        cout<<"\t"<<array[i]->getId()<<"\t|\t"<<array[i]->getpri()<<endl;
    }
}

patient* que::deque(){
    if (size == 0){
        cout<<"Que is empty\n";
        return nullptr;
    }
    else {
        patient* deq = *front; 
        for (int i=0; i<size ;i++){
            if ( i == 9){
                break;
            }
            array[i] = array[i+1];
        }
        size--;
        return deq;
    }
}

void que::clear(){
    for (int i=0; i<size; i++){
        array[i] = nullptr;
    }
    size = 0;
}

bool que::isEmpty(){
    if (size == 0){
        return true;
    }
    else{
        return false;
    }
}

bool que::isFull(){
    if (size == array_size){
        return true;
    }
    else{
        return false;
    }
}

patient* que::firstElement(){
    if (size == 0){
        return nullptr;
    }
    else{
        patient* first = *front;
        return first;
    }
}