#include <iostream>
using namespace std;

class Employee{

private:

    const int employeeId;
    string name;
    float salary; 

public:

    Employee(int employeeId,string name,float salary ): employeeId(employeeId),name(name),salary(salary){

    }

    void displayDetails(){
        cout<<"ID :- "<<employeeId<<" | "<<"Name :- "<<name<<" | "<<"Salary :- "<<salary<<endl;
    }


};

int main(){

    Employee s1(101,"Vinay",100000.00);
    s1.displayDetails();

}






/*
Q6.1 Create a class Employee with:
 const int employeeId
 string name
 float salary
Write a constructor using initializer list to initialize all members.
Q6.2 — Add a function to display details.
Q6.3 — Answer these:
1. Why must const members be initialized in initializer list?
2. What happens if you try to assign the value of a const member inside constructor body?
3. Why is initializer list faster than assignment?*/