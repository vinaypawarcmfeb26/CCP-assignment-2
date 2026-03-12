#include <iostream>
using namespace std;

void swapByValue(int a, int b){
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout << "a = " << a << " b = " << b << endl;

};
void swapByAddress(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    cout << "a = " << a << " b = " << b << endl;


};
void swapByReference(int &a, int &b){
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout << "a = " << a << " b = " << b << endl; 


};

int main(){
    int a,b;
    int *pa=&a;
    int *pb=&b;
    swapByValue(10,20);
    swapByAddress(&a,&b);
    swapByReference(a,b);

    return 0;
}







/*
Q2.1 Write three functions:
void swapByValue(int a, int b);
void swapByAddress(int *a, int *b);
void swapByReference(int &a, int &b);
Call all three in main() and observe which one actually swaps values.
Q2.2 — Answer this:
Explain how reference variables act as aliases and how that affects swapByReference(). 
*/