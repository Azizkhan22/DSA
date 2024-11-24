#ifndef stack_h 
#define stack_h
#include <iostream>
#include <stdexcept>
using namespace std;

template <typename T>
class node {
private:
    T data;
    node* next;
    node* prev;
public:
    node(T d) : data(d), next(nullptr), prev(nullptr) {}

    T getData() {
        return this->data;
    }

    void setNext(node* n) {
        this->next = n;
    }

    void setPrev(node* p) {
        this->prev = p;
    }

    node<T>* getNext() {
        return this->next;
    }

    node<T>* getPrev() {
        return this->prev;
    }

};

template <typename S>
class stack {
private:
    int size;
    node<S>* Top;
public:
    stack() : size(0), Top(nullptr) {}

    int getSize() {
        return this->size;
    }

    void incrementSize() {
        this->size++;
    }

    void push(S value) {
        node<S>* newnode = new node<S>(value);
        if (this->Top == nullptr) {
            this->Top = newnode;
        } else {
            this->Top->setNext(newnode);
            newnode->setPrev(this->Top);
            this->Top = newnode;
        }
        this->incrementSize();
    }

    S pop() {
        if (this->Top == nullptr) {
            throw underflow_error("stack is empty\n");
        } 
        
            S value = this->Top->getData();
            node<S>* temp = this->Top;
            this->Top = this->Top->getPrev();
            if (this->Top != nullptr) {
                this->Top->setNext(nullptr);
            }
            delete temp;
            this->size--;
            return value;

    }

    S top() {
        if (this->Top == nullptr) {
            cout<<"Stack is empty\n";
            return;
        }
        return this->Top->getData();
    }

    bool isEmpty() {
        return this->Top == nullptr;
    }
};

#endif