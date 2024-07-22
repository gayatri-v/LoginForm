#include<iostream>
using namespace std;
class complex;

class calculator{
public:
int add(int a,int b){
    return a+b;
}
int sumrealcomplex(complex,complex);
};

class complex{
int a;
int b;
public:
  void sernumber(int n1,int n2){
    a=n1;
    b=n2;
  }//individually declaring functions as friends
  //friend int calculator::sumrealcomplex(complex,complex);

  //declaring entire calculrtor class as friend

  friend class calculator;
  void print()
  {
    cout<<"the complex number is "<<a<<"+"<<b<<"i"<<endl;
  }
};
int calculator::sumrealcomplex(complex o1,complex o2){
    return(o1.a+o2.a);
}
int main(){

    complex o1,o2;
    o1.sernumber(1,4);
    o2.sernumber(5,7);
    calculator calci;
    int result=calci.sumrealcomplex(o1,o2);
    cout<<"the sum of real part is "<<result<<endl;
    return 0;
}