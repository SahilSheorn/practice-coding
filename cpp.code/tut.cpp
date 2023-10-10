// Railway Reservation project

#include<iostream>
#include<fstream>
#include<string.h>
#include<process.h>
using namespace std;
fstream f;
class login{  
string user,lock,username,lockid;
public: 
void getlogin()
{
    cout<<"Enter your username: "<<endl;
    cin>>user;
    cout<<"Enter your password: "<<endl;
    cin>>lock;
    cout<<"Id Created Successfully"<<endl;
}
void printlogin()
{
cout<<"User Name : "<<user<<endl<<"Password: "<<lock<<endl;
}
void signup(){
 cout<<" Login your id: ";
 cin>>username>>lockid; 
}
}l;
class detail{
 public:
 string cls1,cls2,boarding,destination,train_name;
 int train_no,d,m,y;
void getdetails()
{
    cout<<"Enter the date,month and year: ";
    cin>>d>>m>>y;
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
class reserve: public detail{
 int am=300,book_id,i,seats,age,total,sum,discount,category;
 string name,ch;
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
    switch(category)
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
} 
    }
    }
  void printreserve(){
    printdetails();
    cout<<"N0. of seats booked: "<<seats<<endl;
    for(i=0;i<seats;i++){
        cout<<"Name: "<<name<<endl<<"Age: "<<age<<endl;
        cout<<"Total amount: "<<total<<endl;
    }
}
}r;
class database: public detail,public login{
 public:
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
    signup();
 }
}d;
void admin(){
    string password ="choclate",pass;
    int n;
    char ch;
   cout<<"Enter your login password: ";
   x: cin>>pass;
    if(pass==password){
        do{
        cout<<"1: Create/Add"<<endl<<"2: Display"<<endl<<"3: Edit"<<endl<<"4: Delete"<<endl<<"5: User id Display"<<endl<<"6: Passengers detail"<<endl<<"7: Exit"<<endl;
        cout<<"Enter your choice: ";
        cin>>n;
        switch(n){
            case 1: f.open("train.txt",ios::app);
                    d.create();
                    f.write((char*)&d,sizeof(d));
                    f.close();
                    break;
            case 2: f.open("train.txt",ios::in);                   
                    while(!(f.read((char*)&d,sizeof(d)).eof()))
                     d.display();                 
                    f.close();
                    break;
            case 3:
            break;
            case 4: 
            break;
            case 5: f.open("id.txt",ios::in);                 
                    while(!(f.read((char*)&d,sizeof(d)).eof()))
                    d.printid();
                    f.close();

            break;
            case 6: 
                    f.open("train.txt",ios::in);
                    while(!(f.read((char*)&r,sizeof(r)).eof()))
                    r.printreserve();
                    f.close();
            break;
            case 7: continue;
            break;
            default: cout<<"Invalid choice";
        }
        cout<<"Do you want to continue: ";
        cin>>ch;
        }while(ch=='y');
    }
    else{
        cout<<"Incorrect Password"<<endl;
        cout<<"Re-enter your password: "<<endl;
        goto x;
    }
}
void user(){
    char ch;
    int n;
    string user,username,lock,lockid;
    do{
    cout<<"1: Signup"<<endl<<"2: Reservation"<<endl<<"3: Cancel"<<endl<<"4: Exit"<<endl;
    cout<<"Choose your option: ";
    cin>>n;
    switch(n){ 
    case 1: 

            cout<<"* Create your login id *"<<endl;
            f.open("id.txt",ios::app);
            cout<<"Enter your username: "<<endl;
            cin>>user;
            cout<<"Enter your password: "<<endl;
            cin>>lock;
            cout<<"Id Created Successfully"<<endl;
            f.write((char*)&d,sizeof(d));
            f.close();
            break;
    case 2: 
            f.open("train.txt",ios::in);  
                    cout<<" Login your id: ";
              y:    cin>>username>>lockid;               
                    while(!(f.read((char*)&d,sizeof(d)).eof()))
            if(lock.compare(lockid)==0 && user.compare(username)==0){
            f.open("train.txt",ios::app);  
            d.display(); 
            r.getreserve();
            f.write((char*)&r,sizeof(r));
            }
            else{
                cout<<"Incorrect user id or password"<<endl;
                cout<<"Re-enter the  username and password :"<<endl;
                goto y;
            }
            f.close();
             break;
    case 3: f.open("id.txt",ios::in);                      
            while(! (f.read((char*)&d,sizeof(d)).eof())); 
            d.sign(); 
            if(lock.compare(lockid)==0 && user.compare(username)==0){
            f.open("train.txt",ios::app);   
          
            while(!(f.read((char*)&r,sizeof(r)).eof()));
             // r.getreserve();
            }
            else{
                cout<<"Incorrect user id or password"<<endl;
            }
            f.close();
             break;
    break;
    case 4: continue;
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
  cout<<"1: Adminstration Mode "<<endl<<"2: User Mode "<<endl<<"3: Exit"<<endl;  
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
  cout<<"Do you want to continue: ";
  cin>>ch;
  }while(ch=='y');
} 