#ifndef functions_h
#define functions_h

#include<iostream>
#include<fstream>
#include<stdio.h>

using namespace std;

//Employee class Declaration
class Employee{
    private:
        int code;
        char name[20];
        float salary;
    public:
        void read();
        void display();
        //will return employee code
        int getEmpCode()            { return code;}
        //will return employee salary
        int getSalary()             { return salary;}
        //will update employee salary
        void updateSalary(float s)  { salary=s;}
};
 #endif

