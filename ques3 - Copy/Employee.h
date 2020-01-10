#ifndef Employee_h
#define Employee_h
#include<iostream>
#include<cstring>
#include<ostream>
class Employee{
private:
		
public:
	int id;
	char* name;
	char* city;
	int sal;
	Employee();
	~Employee();
	Employee(int id,char* name,char* city,int sal);
	virtual int calSal(Employee emp);
	virtual void display();
	int EmpSal(Employee&); //to calculate salary via passing object to the function
		//friend ostream& operator<<(ostream &,Employee &);
};

#endif
