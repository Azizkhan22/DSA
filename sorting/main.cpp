#include <iostream>
#include <chrono>
#include "algorithms.cpp"
using namespace std;
using namespace std::chrono; // For convenience

int main(){

    bubbleSort A;
    selectionSort B;
    insertionSort C;

    cout<<"ARRAY in DESCINDING ORDER:\n";

    A.input();
    auto start = high_resolution_clock::now(); // Start timer
    A.sort(); // Perform sorting
    auto end = high_resolution_clock::now(); // End timer
    auto duration = duration_cast<milliseconds>(end - start).count();
    cout << "Bubble Sort Time: " << duration << " ms" << endl;

    B.input(); // Populate array with random numbers
    start = high_resolution_clock::now(); // Start timer
    B.sort(); // Perform sorting
    end = high_resolution_clock::now(); // End timer
    duration = duration_cast<milliseconds>(end - start).count();
    cout << "Selection Sort Time: " << duration << " ms" << endl;

    C.input(); // Populate array with random numbers
    start = high_resolution_clock::now(); // Start timer
    C.sort(); // Perform sorting
    end = high_resolution_clock::now(); // End timer
    duration = duration_cast<milliseconds>(end - start).count();
    cout << "Insertion Sort Time: " << duration << " ms" << endl;

    return 0;
}