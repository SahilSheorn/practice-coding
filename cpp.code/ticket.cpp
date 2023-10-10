#include<iostream>
using namespace std;
class login 
{
    public : int id;
             char pass[100];

void getid()
{
    cout<<"enter the id no. :";
    cin>>id;
    cout<<"enter the password :";
    cin>>pass;
}
void displayid() 
{ 
    cout<<"The id no.   :"<<id <<endl;
    cout<<"The password :"<<pass <<endl; 
}};
class details
{
    public: int  ticketno;
            char trainname[100];
            char bordingpass[100];
            char destination[100];
            //int classes;
            //int c1,c1fare;
            //int c2,c2fare;
            //int c3,c3fare;
            int date,month,year;
void getdetails()
{
  cout<<"Enter ticket no. :";
  cin>>ticketno;
  cout<<"Enetr the train name :";
  cin>>trainname;
  cout<<"Enter the bording pass :";
  cin>>bordingpass;
  cout<<"Enter the destination where you want to go :";
  cin>>destination;
 // cout<<"Enter the class you want to select :";
 // cin>>classes;
  cout<<"enter the date  :";
  cin>>date;
  cout<<"enter the month :";
  cin>>month;  
  cout<<"enter the year :";
  cin>>year;
}
void displaydetails()
{
  cout<<"The ticket no. :"<<ticketno <<endl;
  cout<<"The train name :"<<trainname <<endl;
  cout<<"The bording pass :"<<bordingpass <<endl;
  cout<<"The destination :"<<destination <<endl;
  cout<<"The date :"<<date <<endl;
  cout<<"The month :"<<month <<endl;
  cout<<"The year :"<<year <<endl;
}};
class reservation 
{
   public: int passangernumber;
           int trainno;
           char trainname[100];
           char passangername[100];
           int age;
           char classs[100];
           int numberofseats;
          // int i;
          // float amount;

    void getreser()
    {
        cout<<"Enter the passanger no. :";
        cin>>passangernumber;
        cout<<"Enter the passanger name :";
        cin>>passangername;
        cout<<"Enter the train number :";
        cin>>trainno;
        cout<<"Enter the train name :";
        cin>>trainname;
        cout<<"Enter your age :";
        cin>>age;
        cout<<"Enter the class of train :";
        cin>>classs;
        cout<<"Enter the number of seats you want to book :";
        cin>>numberofseats;
    }
    void dispalyreser()
    {
        cout<<"The passanger no. :"<<passangernumber <<endl;
        cout<<"The passanger name :"<<passangername <<endl;
        cout<<"The train number :"<<trainno <<endl;
        cout<<"The train name :"<<trainname <<endl;
        cout<<"The age :"<<age <<endl;
        cout<<"The class you book :"<<classs <<endl;
        cout<<"The number of seats you book :"<<numberofseats <<endl;
    }
};
int main(){
    login l1;
    details d1;
    reservation r1;
    l1.getid();
    d1.getdetails();
    r1.getreser();
    cout<<endl;
    l1.displayid();
    d1.displaydetails();
    r1.dispalyreser();
}
