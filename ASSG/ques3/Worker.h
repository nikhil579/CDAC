#ifndef Worker_h
#define Worker_h
#include<iostream>
#include<cstring>
#include<ostream>
#include"Employee.h"
class Worker:public Employee{
private:
		
public:
		int rate;
		int workhr;
		Worker();
		~Worker();
		Worker(int id,char* name,char* city,int sal,int workhr,int rate);
		int calSal();
		void display();
		//friend ostream operator<<(ostream &,Worker &);
		

};

#endif
