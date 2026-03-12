#include <iostream>
 using namespace std;

 class Student{
    private:

    int rollNo;
    string name;
    float marks;

    public:

    Student(): rollNo (0),name ("Student"),marks (0.0){

    }

    Student(int rollNo,string name,float marks){
        this->rollNo = rollNo;
        this->name = name;
        this->marks = marks;

    }
    void printDetails(){
        cout<<"Student Roll No :- "<<rollNo<<" | "<<"Student Name :- "<<name<<" | "<<"Student Marks :- "<<marks<<endl;
      
    }

 };

 int main(){
    Student s1;
    Student s2(101,"Vinay",85.5);
    Student s3(102,"Yash",85.5);

    s1.printDetails();
    s2.printDetails();
    s3.printDetails();

    return 0;
 }







 /*Q5.1 Create a class Student with:
 rollNo
 name
 marks
Write the following:
1. Default constructor
2. Parameterized constructor
3. Constructor that uses this-> pointer
4. A function to print student details
Create:
 One object using default constructor
 Two objects using parameterized constructor
Q5.2 — Answer:
 When does compiler generate a default constructor?
 When does it NOT generate one?
 Can constructors be overloaded? 
*/