#include <iostream>
using namespace std;

int main(){

    int a =10;
    cout<<"initial value a = "<<a<<endl;

    int *ptr =&a;
    int ref =a;
    cout<<"initial value ptr = "<<a<<endl;
    cout<<"initial value ref = "<<ref<<endl;

    *ptr = 20;
    cout<<"after pointer change ptr = "<<a<<endl;

    ref =30;
    cout<<"after ref change ref = "<<ref<<endl;

    return 0;
}




/*
Q3.1 Write a program to store an integer value in a variable, then:
 Create a pointer pointing to the variable
 Create a reference to the same variable
 Modify the value using pointer and reference
Print the variable after each change.
Q3.2 — Explain:
 Two differences between pointer and reference
 Why references cannot be reseated but pointers can
 Why references cannot be NULL 
*/