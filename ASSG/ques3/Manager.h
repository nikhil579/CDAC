#ifndef Manager_h
#define Manager_h
#include<iostream>
#include<cstring>
#include<ostream>
#include"Employee.h"
class Manager:public Employee{
private:
		
public:
		int inst;	
		int target;
		int allwnc;
		Manager();
		~Manager();
		Manager(int id,char* name,char* city,int sal,int inst,int target,int allwnc);
		int calSal();
		void display();
		//friend ostream operator<<(ostream &,Manager &);
		

};

#endif
