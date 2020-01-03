#include"functions.h"
//Read employee record
void Employee::read(){
    cout<<"Enter employee code: ";
    cin>>code;
    cout<<"Enter name: ";
    cin.ignore(1);
    cin.getline(name,20);
    cout<<"Enter salary: ";
    cin>>salary;
}
 
//Display employee record
void Employee::display()
{
    cout<<code<<" "<<name<<"\t"<<salary<<endl;
}
 
//global declaration
fstream file;
 
//Will delete file when program is being executed
//because we are create file in append mode
void deleteExistingFile(){
    remove("file.txt");
}
 
//function to append record into file
void appendToFille(){
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
        if(x.getSalary()>=10000 && x.getSalary()<=20000)
            x.display();
    }
  file.close();
}
 
void searchForRecord(){
    //read employee id
    Employee    x;
    int c;
    int isFound=0;
 
    cout<<"Enter employee code: ";
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
