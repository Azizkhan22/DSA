#include <iostream> 
#include "stack.h"
using namespace std;
int main(){
    char expression[100];
    cout<<"enter your expression:\n";
    cin.getline(expression,100);
    stack s;
    s.check_exp(expression);
}