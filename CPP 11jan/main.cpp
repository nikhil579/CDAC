#include"Employee.h"
#include"Worker.h"
#include"Manager.h"
#include<iostream>
#include<fstream>
using namespace std;
int login();
int login ()
{
    string userName;
    string userPassword;
    int loginAttempt = 0;

    while (loginAttempt < 5)
    {
        cout << "USERNAME : ";
        cin >> userName;
        cout << "PASSWORD : ";
        cin >> userPassword;

        if (userName == "nikhil" && userPassword == "pass")
        {
            cout << "Welcome "<<userName<<endl;
            break;
        }
        else
        {
            cout << "Invalid login attempt. Please try again.\n" << '\n';
            loginAttempt++;
        }
    }
    if (loginAttempt == 5)
    {
            cout << "Too many login attempts! The program will now terminate.";
            return 0;
    }

    cout << "Thank you for logging in.\n";
   return 0;   
}
char ch;
int main(){
	login();
	
	cout<<"=========================================="<<endl;
	cout<<"EMPLOYEE"<<endl;
	cout<<"=========================================="<<endl;
	Employee *e1 =new Employee(1,"Nikhil","Pune",579579);
	e1->display();

	cout<<"=========================================="<<endl;
	cout<<"WORKER"<<endl;
	cout<<"=========================================="<<endl;
	Worker *w=new Worker(2,"Thor","Asgard",1111111,99,999);
	w->display();

	cout<<"=========================================="<<endl;
	cout<<"MANAGER"<<endl;
	cout<<"=========================================="<<endl;
	Manager *man =new Manager(3,"Iron Man","New York",9999999,1234,23,3456);
	man->display();
	cout<<"=========================================="<<endl;
	cout<<"SALARIES: "<<endl;
	cout<<"=========================================="<<endl;
	//e1.calSal(15000);
	//w.calSal(20000);
	//man.calSal(25000);
	int num1=e1->calSal(e1);
	cout<<num1<<endl;
	cout<<"=========================================="<<endl;
	int num2=w->calSal(w);
	cout<<num2<<endl;
	cout<<"=========================================="<<endl;
	int num3=man->calSal(man);
	cout<<num2<<endl;
	cout<<"=========================================="<<endl;
	//FILE HANLDINDG
	ofstream file;
	file.open("empl.txt",ios::app);
	file<<e1<<" ";
	file.close();
	//MENU DRIVEN
	
	/*do{
     int n;
 
     cout<<"ENTER CHOICE\n"<<"1.ADD AN EMPLOYEE\n"<<"2.DISPLAY\n"<<"3.SEARCH\n"<<"4.INSERT RECORD\n";
     cout<<"Make a choice: ";
     cin>>n;
 
     switch(n){
			case 1:
				appendToFille();
				break;
			case 2 :
				displayAll();
				break;
			case 3:
				searchForRecord();
				break;
			case 4:
				insertRecord();
				break;
			default :
				cout<<"Invalid Choice\n";
     }
 
     cout<<"Do you want to continue ? : ";
     cin>>ch;
 
     }while(ch=='Y'||ch=='y');
     
    return 0;
}*/
	 return 0;   
}	

