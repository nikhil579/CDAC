#include"Employee.h"
#include"Worker.h"
#include"Manager.h"
#include<iostream>

using namespace std;
int login();
int login ()
{
    string userName;
    string userPassword;
    int loginAttempt = 0;

    while (loginAttempt < 5)
    {
        cout << "Please enter your user name: ";
        cin >> userName;
        cout << "Please enter your user password: ";
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
	Employee *e1 =new Employee(1,"Nikhil","Pune",12000);
	e1->display();

	cout<<"=========================================="<<endl;
	cout<<"WORKER"<<endl;
	cout<<"=========================================="<<endl;
	Worker *w=new Worker(2,"Thor","Asgard",1111111,99,999);
	w->display();

	cout<<"=========================================="<<endl;
	cout<<"MANAGER"<<endl;
	cout<<"=========================================="<<endl;
	Manager *man =new Manager(3,"Iron Main","New York",9999999,1234,23,3456);
	man->display();
	cout<<"=========================================="<<endl;
	cout<<"SALARIES: "<<endl;
	cout<<"=========================================="<<endl;
	//e1.calSal(15000);
	//w.calSal(20000);
	//man.calSal(25000);
	int num=calSal(e1);
	cout<<num<<endl;
	cout<<"=========================================="<<endl;
	

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
			case 5:
				increaseSalary();
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

