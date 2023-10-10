#include<iostream>
#include<fstream>
using namespace std;
class contact{
    string name,fname,mname,email,address,city,country,contactno,id;
    long long int phone;
    public :
    char choice='y';

    void add()
    {
        do{
        cout<<"Enter the contact no. :";
        cin>>contactno;
        cout<<"Enter the name :";
        cin>>name;
        cout<<"Enter the fathers name :";
        cin>>fname;
        cout<<"Enter the mname :";
        cin>>mname;
        cout<<"Enter the email id :";
        cin>>email;
        cout<<"Enter the address :";
        cin>>address;
        cout<<"Enter the city :";
        cin>>city;
        cout<<"Enter the country :";
        cin>>country;
        cout<<"Enter the phone no. :";
        cin>>phone;
        
        cout<<"Do you want to add more data :";
        cin>>choice;
    }while(choice=='y');
}

    void display()
    {
        cout<<"Contact id no.   :"<<contactno<<endl;
        cout<<"Name             :"<<name     <<endl;
        cout<<"Father Name      :"<<fname    <<endl;
        cout<<"Mother Name      :"<<mname    <<endl;
        cout<<"Email            :"<<email    <<endl;
        cout<<"Address          :"<<address  <<endl;
        cout<<"City             :"<<city     <<endl;
        cout<<"Country          :"<<country  <<endl;
        cout<<"Phone No.        :"<<phone    <<endl;
    }
    void update()
    {
        cout<<"Enter the contact id :";
        cin>>id;  
        cout<<endl;
    }
    void search()
    {
        cout<<endl;
    }
    void delet()
    {

        cout<<endl;
    }
};
int main()
    char ch='y';
    int n;
    contact a;
    fstream f;
    do
    cout<<"**CONTACT BOOK **"<<endl <<"1. ADD RECORD : " <<endl <<"2. DISPLAY RECORD : "<<endl <<"3. UPDATE RECORD : "<<endl <<"4. DELETE RECORD : "<<endl <<"5. SEARCH RECORD"<<endl;
    cout<<"Select which you want to open : " ;
    cin>>n ;
    cout<<endl;
    switch (n)
    
    case 1: f.open("contactbook.txt",ios ::out);
            f.write ((char*)&a,sizeof(a));
            a.add();
            f.close();
            break;
    case 2: f.open("contactbook.txt",ios::in);
            while(f.eof())
            f.read((char*)&a,sizeof(a));
            a.display();
            f.close();
            break;
   // case 3: a.update();
   // break;
   // case 4: a.search();
   // break;
    case 5: a.delet();
            break;
            default:
            break;
    ;
    cout<<"Do you want to continue :";
    cin>>ch;
    while(ch=='y');

