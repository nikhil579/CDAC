#include"Employee.h"
#include"Manager.h"
using namespace std;
#include<ostream>

Manager::Manager(){
		cout<<"Constructor"<<endl;
		id=0;
		name=NULL;
		city=NULL;
		sal=0;
		inst=0;
		target=0;
		allwnc=0;
		
}

Manager::Manager(int id,char* name,char* city,int sal,int inst,int target,int allwnc):Employee(id,name,city,sal){
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
		this->inst=inst;
		this->target=target;
		this->allwnc=allwnc;
			
}

int Manager::calSal(Manager *emp){
	//cout<<"CalSal"<<endl;
	this->sal=emp->sal+emp->inst+emp->target+emp->allwnc;
	cout<<"Manager Salary: "<<sal<<endl;
return sal;
}
void Manager::display(){
			cout<<"ID: "<<id<<endl;
			cout<<"NAME: "<<name<<endl;
			cout<<"CITY: "<<city<<endl;
			cout<<"SALARY: "<<sal<<endl;
			cout<<"INCENTIVE: "<<inst<<endl;
			cout<<"TARGET: "<<target<<endl;	
			cout<<"ALLOWANCE: "<<allwnc<<endl;	

}
/*ostream operator<<(ostream& out,Manager emp){
			out<<"ID: "<<id<<endl;
			out<<"NAME: "<<name<<endl;
			out<<"CITY: "<<city<<endl;
			out<<"SALARY: "<<sal<<endl;
}*/
Manager::~Manager(){
	//cout<<"Destructor"<<endl;
		delete[] name;
		delete[] city;
	
}
