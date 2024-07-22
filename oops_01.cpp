//classes pubilc and private access
#include<iostream>
using namespace std;

class Employee
{
    private:
       int a,b,c;
    public:
      int d,e; 
      void setData(int a1,int b1,int c1); //declare
      void getData(){
        cout<<"the valuse of a is"<<a<<endl;
        cout<<"the valuse of b is"<<b<<endl;
        cout<<"the valuse of c is"<<c<<endl;
        cout<<"the valuse of d is"<<d<<endl;
        cout<<"the valuse of e is"<<e<<endl;
        

      } 
};

void Employee :: setData(int a1,int b1,int c1){
a=a1;
b=b1;
c=c1;
}
int main(){
 Employee harry;//harry is th object
 //0harry.a-> it is private
 harry.d=6;
 harry.e=9;
 harry.setData(1,2,4);
 harry.getData();
 return 0;
}