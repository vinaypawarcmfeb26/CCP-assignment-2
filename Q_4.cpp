#include <iostream>
using namespace std;

int main(){

    int *arr = new int[4];

    cout<<"Enter 5 Number :- "<<endl;
    for(int i=0;i<5;i++){
        cin>> arr[i];
    }
    cout<<"Array :- "<<endl;
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" | ";
    }


    return 0;
}






/*
Q4.1 Write a program that:
 Uses new to allocate an array of 5 integers
 Takes user input
 Prints the values
 Deallocates memory using delete[]
Q4.2 Repeat Q4.1 using malloc and free.
Q4.3 — Explain:
 Why constructors are not called when using malloc
 Why new is preferred in C++
 Difference in return types and initialization
 Why malloc cannot initialize complex types*/