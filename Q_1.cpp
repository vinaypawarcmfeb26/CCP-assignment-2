#include <iostream>
using namespace std;

class Box{

private :

    int length;
    int width;
    int height;

public :

Box(int length,int width, int height){
    this->length=length;
    this->width=width;
    this->height=height;
}

void setDimensions(int length,int width, int height){
    this->length=length;
    this->width=width;
    this->height=height;
}

int volume(){
    return length * width * height;
}
};


int main(){

    Box s1(10,20,30);
    cout<<"used constructor for Volume of Box :- "<<s1.volume()<<endl;
    s1.setDimensions(40,50,60);
    cout<<"used setDimensions for after Volume of Box :- "<<s1.volume()<<endl;
    return 0;
}




/*
Q1.1 Create a class Box with private members length, width, and height.
Write:
 A parameterized constructor
 A function setDimensions(int, int, int) that uses this-> to distinguish between
member variables and parameters
 A function volume() to compute the volume
Demonstrate:
 Initialization using constructor
 Assignment using setDimensions()
Q1.2 — Answer this:
 Why must initialization happen before assignment?
 When is initialization preferred over assignment? */