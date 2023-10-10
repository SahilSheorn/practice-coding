#include<iostream>
using namespace std;
class shape
{
   public :virtual void draw()
   {
    cout<<"2d shape";
    }};
class shape1 : public shape
{
    public : void draw()
    {
        cout<<"3d shape";
    }
};
int main(){
    shape *s;
    shape1 s1;
    s=&s1;
 s->draw();
  shape s2;
 s=&s2;
 s->draw();
}  