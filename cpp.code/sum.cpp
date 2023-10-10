#include<iostream>
using namespace std;
class contact{
          int id;
          long long int mobileno;
protected : void details()
          {
            cout<<"Enter Id no. :"; 
            cin>>id;
            cout<<"Enter Mobile no. :";
            cin>>mobileno;
            }
          void displayd()
          {
            cout<<"ID :"<<id <<endl;
            cout<<"MOBILE NO. :"<<mobileno <<endl;
            }};
class company{
          char companyname[100],website[100],city[100],country[100],address[100];
          int pinno;
   public: void companyy()
          {  
            cout<<"Enter your company name :";
            cin>>companyname;
            cout<<"Enter website name :";
            cin>>website;
            cout<<"Enter your city :";
            cin>>city;
            cout<<"Enter your country :";
            cin>>country;
            cout<<"Enter your address :";
            cin>>address;
            cout<<"Enter the pin no. :";
            cin>>pinno;
            }
          void displayc()
          {
            cout<<"Name :"<<companyname <<endl;
            cout<<"Website :"<<website <<endl;
            cout<<"City :"<<city <<endl;
            cout<<"Country :"<<country <<endl;
            cout<<"Addresss :"<<address <<endl;
            cout<<"Pin no. :"<<pinno <<endl;
            }};
class emplloyee : protected contact , protected company
{
          char employname[100],country[100];
          long long int pin,d,o,b,dd,oo,j;
protected: void employe()
          {
            details();
            companyy();
            cout<<"Enter the employ name :";
            cin>>employname;
            cout<<"Enter date of birth :";
            cin>>d>>o>>b;
            cout<<"Enter the date of joining :";
            cin>>dd>>oo>>j;
            }
          void displaye()
          {
            displayd();
            displayc();
            cout<<"Employ name :"<<employname <<endl;
            cout<<"Date of birth :"<<d <<"/" <<o <<"/" <<b <<endl;
            cout<<"Date of joining "<<dd <<"/" <<oo <<"/" <<j <<endl;
          }};
class hr : protected emplloyee
{
          long int sallary,bonus;
          char dept[100];
 protected :void hrinfo()
          {
            employe();
            cout<<"Enter the department :";
            cin>>dept;
            cout<<"Enter the sallary :";
            cin>>sallary;
            cout<<"Enter the bonus :";
            cin>>bonus;
            }
          void displayh()
          {
            displaye();
            cout<<"Department :"<<dept <<endl;
            cout<<"Sallary :"<<sallary <<endl;
            cout<<"Bonus :"<<bonus <<endl; 
            }};
class salesmanager : public hr
{
  public :void sales()
  {
    hrinfo();
    cout<<endl;
    displayh();
  }};
int main(){
  salesmanager s1;
 s1.sales(); 
 }