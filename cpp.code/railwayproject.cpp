#include<iostream>
#include<fstream>
#include<string.h>
#include<process.h>
using namespace std;
fstream f;
class detail{
 public:
 string cls1,cls2,boarding,destination,train_name;
 int train_no,d,m,y;
void getdetails()
{
    cout<<"Enter the date: ";
    cin>>d;
    cout<<"Enter the month: ";
    cin>>m;
    cout<<"Enter the year: ";
    cin>>y;
    cout<<"Enter the train name: ";
    cin>>train_name;
    cout<<"Enter the Train number: ";
    cin>>train_no;
    cout<<"Enter your Boarding/Starting point: ";
    cin>>boarding;
    cout<<"Enter your destination where you want to go: ";
    cin>>destination;
}
void printdetails() 
{
    cout<<"Date: "<<d<<"/"<<m<<"/"<<y<<endl<<"Train name: "<<train_name<<endl<<"Train number: "<<train_no<<endl;
    cout<<"Starting/Boarding Point: "<<boarding<<endl;
    cout<<"Destination: "<<destination<<endl;    
}
};
void menu(){
    cout<<"1: Adminstration Mode "<<endl<<"2: User Mode "<<endl<<"3: Exit"<<endl;  
}
class login{  
string user, pass;
public: 
void getlogin()
{
    cout<<"Enter your username: ";
    cin>>user;
    cout<<"Enter your password: "<<endl;
    cin>>pass;
    cout<<"Id Created Successfully"<<endl;
}
void printlogin()
{
cout<<"User Name : "<<user<<endl<<"Password: "<<pass<<endl;
}
}l; 
class reserve: public detail{
 int am=300,book_id,i,seats,age;
 string name,category,ch;
public:
void getreserve(){
    getdetails();
    cout<<"Enter the number of seats you want to book: ";
    cin>>seats;
    for(i=0;i<seats;i++){
        cout<<"Enter the Name: ";
        cin>>name;
        cout<<"Enter the Age: ";
        cin>>age;
    cout<<"Category List : "<<endl;
    cout<<"1. Military person"<<endl<<"2. Senior Citizen"<<endl<<"3. Children"<<endl<<"4. Adult"<<endl;
    cout<<"Choose your category from the given list: "<<endl;
    cin>>category;
    }
   
    }
}r;
/* switch(category)
    {
    case 1: 
    cout<<"Discount=30%"<<endl;
    discount=(30/100)*am;
    total = am-discount;
    cout<<"Ticket price: "<<total;
    break;
    case 2:
    cout<<"Discount=20%"<<endl;
     discount=(20/100)*am;
     total = am-discount;
     cout<<"Ticket price: "<<total;
    break;
    case 3:
    cout<<"Discount=30%"<<endl;
     discount=(30/100)*am;
     total = am-discount;
     cout<<"Ticket price: "<<total;
    break;
    case 4: 
    cout<<"No Discount"<<endl;
    am = am;
    total = am;
    cout<<"Ticket price: "<<total<<endl;
    break;
    default: cout<<"Enter the valid choice";
} */
class database: public detail,public login{
 public: string user,lock,username,lockid;  
 void create(){
    getdetails();
 }
 void display(){
    printdetails();
 }
 void add(){
    getdetails();
 }
 void createid(){
    getlogin();
 }
 void printid(){
    printlogin();
 }
 void sign(){
    cout<<"Enter your login id: ";
    cin>>user;    
    cout<<"Enter the Password: ";  
    cin>>lock;
 }
}d;
void admin(){
    string password ="choclate",pass;
    int n;
    char ch;
    cout<<"Admin account ";
    cout<<"Enter your login password: ";
    x: cin>>pass;
    if(pass==password){
        cout<<"Id login successfully "<<endl;
        do{
        cout<<"1: Create/Add"<<endl<<"2: User Id Display"<<endl<<"3: Display"<<endl<<"4: Edit"<<endl<<"5: Delete"<<endl<<"6: Passengers detail"<<endl<<"7: Exit"<<endl;
        cout<<"Enter your choice: ";
        cin>>n;
        switch(n){
            case 1: f.open("pro.txt",ios::app);
                    d.create();
                    f.write((char*)&d,sizeof(d));
                    f.close();
                    break;
            case 2: f.open("pro.txt",ios::in);
                    d.display();
                    f.read((char*)&d,sizeof(d));
                    f.close();              
                    break;
            case 3: 
                    break;
            case 4: 
            break;
            case 5: 
            break;
            case 6:
            break;
            case 7: continue;
            break;
            default: cout<<"Invalid choice";
        }
        cout<<"Do you want to continue : ";
        cin>>ch;
        }while(ch=='y');
    }
    else{
        cout<<"Incorrect Password"<<endl;
        cout<<"Enter your password again :";
        goto x;
    }
}
void user(){
    char ch;
    int n;
    string user,username,lock,lockid;
    do{
    cout<<"1: Create"<<endl<<"2: Reservation"<<endl<<"3: Cancel"<<endl<<"4: Exit"<<endl;
    cout<<"Choose your option: ";
    cin>>n;
    switch(n){ 
    case 1: 
            cout<<"* Create your login id *"<<endl;
            f.open("id.txt",ios::app);
            d.createid();
            f.write((char*)&d,sizeof(d));
            f.close();
            break;
    case 2: 
            f.open("id.txt",ios::in);
            d.sign();
            f.read((char*)&d,sizeof(d));
            if(lock.compare(lockid)==0){
            f.open("pro.txt",ios::app); 
            r.getreserve();
             f.write((char*)&r,sizeof(r));
            }
            else{
                cout<<"Incorrect user id or password"<<endl;
            }
            f.close();
             break;
    case 3: 
    break;
    case 4: exit(0);
    break;
}
cout<<"Do You Want To Continue: ";
cin>>ch;
    }while(ch=='y');
}

int main(){
    int n;
    char ch;
    do{
  menu();
  cout<<"Choose your option: ";
  cin>>n;
  switch(n){
   case 1: admin();
   break;
   case 2: user();
   break;
   case 3: exit(0);
   break;
   default: cout<<"Invalid choice"; 
  }
  cout<<"Do you want to exit  : ";
  cin>>ch;
  }while(ch=='y');
}