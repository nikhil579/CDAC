#include"Employee.h"
using namespace std;
#include<ostream>
Employee::Employee(){
			cout<<"Constructor"<<endl;
			id=0;
			name=NULL;
			city=NULL;
			sal=0;
}

Employee::Employee(int id,char* name,char* city,int sal){
			this->id=id;
			//this->name=name;
			this->name=new char[strlen(name)+1];
			strcpy(this->name,name);
			this->name[strlen(name)+1]='\0';
			//this->city=city;
			this->city=new char[strlen(city)+1];
			strcpy(this->city,city);
			this->city[strlen(city)+1]='\0';
			this->sal=sal;
}

int Employee::calSal(Employee emp){
	//cout<<"CalSal"<<endl;
	this->sal=emp.sal;
	cout<<"Employee Salary: "<<sal<<endl;
return 0;
}
//to calculate salary via passing object to the function
int Employee::EmpSal(Employee& emp){
	int sal;
	this->sal=emp.sal;
	cout<<"EMPLOYEE SALARY :"<<this->sal<<endl;
	return sal;
}

void Employee::display(){
			cout<<"ID: "<<id<<endl;
			cout<<"NAME: "<<name<<endl;
			cout<<"CITY: "<<city<<endl;
			cout<<"SALARY: "<<sal<<endl;

}
/*ostream& operator<<(ostream& out,Employee emp){
			out<<"ID: "<<id<<endl;
			out<<"NAME: "<<name<<endl;
			out<<"CITY: "<<city<<endl;
			out<<"SALARY: "<<sal<<endl;
}*/
Employee::~Employee(){
	//cout<<"Destructor"<<endl;
	delete[] name;
	delete[] city;
}
