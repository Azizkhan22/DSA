#include <iostream>
#include "stack.h"
using namespace std;

stack::stack(): size(0) {
    *array = {0};
    top = array;
}

void stack::push(char v){
    
    if (size == 0){
        *top = v;
        size++;
    }
    else if (size == 100){       
        cout<<"The stack is full";
        return;
    }
    else{
        top = top+1;
        *top = v;
        size++;
    }
}

int stack::pop(){
    int pop = *top;
    *top = 0;
    top-- ;
    size-- ;
    return pop;
}

bool stack::isEmpty(){
    if (size == 0){
        return true;
    }
    else{
        return false;
    }
}
bool stack::isFull(){
    if (size == 100){
        return true;
    }
    else{
        return false;
    }
}
void stack::peak(){
    cout<<"Top member of stack: "<<*top<<endl;
}

void stack::display(){
    for (int i=0; i<size; i++){
        cout<<"|"<<array[i];
    }
    cout<<endl;
}

void stack::check_exp(char* exp){
    for (int i=0; i<100; i++){
        if (exp[i] == '\0' ){
            break;
        }
        push(exp[i]);
    }
    char p;
    int right_c = 0;
    int left_c = 0;
    do{
        p = pop();
        if (p == '(' || p == '[' || p == '{'){
            left_c ++;
        }
        else if (p == ')' || p == ']' || p == '}'){
            right_c++;
        }
    }while (size != 0);

    if (right_c == left_c){
        cout<<"expression is correct\n";
    }
    else if (right_c != left_c){
        cout<<"expression is incorrect\n";
    }

}