#include"Employee.h"
#include"Worker.h"
using namespace std;
#include<ostream>

Worker::Worker(){
		cout<<"Constructor"<<endl;
		id=0;
		name=NULL;
		city=NULL;
		sal=0;
		workhr=0;
		rate=0;
}

Worker::Worker(int id,char* name,char* city,int sal,int workhr,int rate):Employee(id,name,city,sal){
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
		this->workhr=workhr;
		this->rate=rate;
			
}

int Worker:: calSal(Employee emp){
	//cout<<"CalSal"<<endl;
	this->sal=emp.sal+emp.workhr+emp.rate;
	cout<<"Worker Salary: "<<sal<<endl;
return 0;
}



void Worker::display(){
			cout<<"ID: "<<id<<endl;
			cout<<"NAME: "<<name<<endl;
			cout<<"CITY: "<<city<<endl;
			cout<<"SALARY: "<<sal<<endl;
			cout<<"WORKING HOURS: "<<workhr<<endl;
			cout<<"RATE PER HOUR: "<<rate<<endl;	

}
/*ostream operator<<(ostream& out,Worker emp){
			out<<"ID: "<<id<<endl;
			out<<"NAME: "<<name<<endl;
			out<<"CITY: "<<city<<endl;
			out<<"SALARY: "<<sal<<endl;
}*/
Worker::~Worker(){
	//cout<<"Destructor"<<endl;
		delete[] name;
		delete[] city;
	
}
