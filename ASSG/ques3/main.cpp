#include"Employee.h"
#include"Worker.h"
#include"Manager.h"
#include<iostream>
#include"functions.h"
using namespace std;
int login();

char ch;
int main(){
	login();
	

	//MENU DRIVEN
	
	do{
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
	
	
	
}
	/*cout<<"=========================================="<<endl;
	cout<<"EMPLOYEE"<<endl;
	cout<<"=========================================="<<endl;
	Employee e1(101,"ABC","Pune",15000);
	e1.display();

	cout<<"=========================================="<<endl;
	cout<<"WORKER"<<endl;
	cout<<"=========================================="<<endl;
	Worker w(102,"PQR","Nashik",10000,160,60);
	w.display();

	cout<<"=========================================="<<endl;
	cout<<"AREA SALES MANAGER"<<endl;
	cout<<"=========================================="<<endl;
	Manager man(103,"XYZ","Mumbai",17000,1000,2,3000);
	man.display();
	cout<<"=========================================="<<endl;
	cout<<"SALARIES: "<<endl;
	cout<<"=========================================="<<endl;
	e1.calSal();
	w.calSal();
	man.calSal();
	cout<<"=========================================="<<endl;
	*/
//	Employee e2(104,"Nikk","Pune",25000);
	//EmpSal(e2);
					
/*	EmpSal(w);
	EmpSal(asm);
*/

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

