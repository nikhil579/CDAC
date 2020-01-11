/*CPP
Write a console application which will accept user name and password at startup if user enter admin credentials then he will be able to add+del+update Employee records.
-Employee may be a type of worker, sales manager, HR.
-Employee have salary where are worker have extra working hour with per hour pay.
-Sales manager have travelling allowance with incentive as per target after completing total target.
-	Hr has home allowance, incentive per requirement and number of recruitments.
-This data entered by admin, if employee login with his credentials he can see only his details.
Use file.txt to save the data.*/
#include<iostream>
#include<fstream>
#include<stdio.h>

using namespace std;
 int login();
//Employee class Declaration
class Employee{
    private:
        int id;
        char name[20];
        float salary;
    public:
        void read();
        void display();
        //will return employee id
        int getEmpCode()            { return id;}
        //will return employee salary
        int getSalary()             { return salary;}
        //will update employee salary
        void updateSalary(float s)  { salary=s;}
};
 
//Read employee record
void Employee::read(){
    cout<<"Enter employee id: ";
    cin>>id;
    cout<<"Enter name: ";
    cin.ignore(1);
    cin.getline(name,20);
    cout<<"Enter salary: ";
    cin>>salary;
}
 
//Display employee record
void Employee::display()
{
    cout<<id<<" "<<name<<"\t"<<salary<<endl;
}
 
//global declaration
fstream file;
 
//Will delete file when program is being executed
//because we are create file in append mode
void deleteExistingFile(){
    remove("file.txt");
}
 
//function to append record into file
void appendToFile(){
    Employee x;
    //Read employee record from user
    x.read();
     
    file.open("file.txt",ios::out|ios::app);
    if(!file){
        cout<<"ERROR IN CREATING FILE\n";
        return;
    }
    //write into file
    file.write((char*)&x,sizeof(x));
    file.close();
    cout<<"Record added sucessfully.\n";
}
 
void displayAll(){
    Employee    x;
     
    file.open("file.txt",ios::out|ios::in);
    if(!file){
        cout<<"ERROR IN OPENING FILE \n";
        return;
    }
    while(file){
    if(file.read((char*)&x,sizeof(x)))
            x.display();
    }
  file.close();
}
 
void searchForRecord(){
    //read employee id
    Employee    x;
    int c;
    int isFound=0;
 
    cout<<"Enter employee id: ";
    cin>>c;
 
 
    file.open("file.txt",ios::out|ios::in);
    if(!file){
        cout<<"ERROR IN OPENING FILE \n";
        return;
    }
    while(file){
        if(file.read((char*)&x,sizeof(x))){
            if(x.getEmpCode()==c){
                cout<<"RECORD FOUND\n";
                x.display();
                isFound=1;
                break;
            }
        }
    }
    if(isFound==0){
        cout<<"Record not found!!!\n";
    }
    file.close();
}
 

//Insert record by assuming that records are in 
//ascending order
void insertRecord(){
    //read employee record
    Employee    x;
    Employee newEmp;
     
    //Read record to insert
    newEmp.read();
 
    fstream fin;
    //read file in input mode
    file.open("file.txt",ios::out|ios::in);
    //open file in write mode
    fin.open("TEMP.txt",ios::out|ios::out);
 
    if(!file){
        cout<<"Error in opening file.txt file!!!\n";
        return;
    }
    if(!fin){
        cout<<"Error in opening TEMP.txt file!!!\n";
        return;
    }
    while(file){
        if(file.read((char*)&x,sizeof(x))){
            if(x.getEmpCode()>newEmp.getEmpCode()){
                fin.write((char*)&newEmp, sizeof(newEmp));
            }
            //no need to use else
            fin.write((char*)&x, sizeof(x));
        }
    }
 
    fin.close();
    file.close();
     
    rename("TEMP.txt","file.txt");
    remove("TEMP.txt");
    cout<<"Record inserted successfully."<<endl;
}
 
int main()
{
     char ch;
     login();
    do{
     int n;
    cout<<"OPTIONS: \n"<<"1.INSERT EMPLOYEE\n"<<"2.SHOW DETAILS \n"<<"3.SEARCH\n"<<"4.INSERT RECORD\n";
     cout<<"Enter Choice: ";
     cin>>n;
 
     switch(n){
          case 1:
            appendToFile();
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
 
     cout<<"Continue ? : ";
     cin>>ch;
 
     }while(ch=='Y'||ch=='y');
     
    return 0;
}

int login ()
{
    string userName;
    string userPassword;
    int loginAttempt = 0;
	cout << "=====================================================\n";
	cout << "LOGIN WINDOW\n";
	cout << "=====================================================\n";
    while (loginAttempt < 3)
    {
        cout << "User Name: ";
        cin >> userName;
        cout << "Password: ";
        cin >> userPassword;

        if (userName == "nikhil" && userPassword == "pass")
        {
            break;
        }
        else
        {
            cout << "Login Failed. Please try again.\n"<<'\n';
            loginAttempt++;
        }
    }
    if (loginAttempt == 3)
    {
            cout << "Login attempt exceeded";
            return 0;
    }
  return 0;
}	

