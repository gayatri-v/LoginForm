//

#include<iostream>
using namespace std;
class base1{
 int data1;
 public:
 base1(int i){
    data1=i;
    cout<<"the base1 constructor is called"<<endl;
 }
 void printdata1(){
    cout<<"the value of data 1 is "<<data1<<endl;
 }
};
class base2{
 int data2;
 public:
 base2(int i){
    data2=i;
    cout<<"the base2 constructor is called"<<endl;
 }
 void printdata2(){
    cout<<"the value of data 2 is "<<data2<<endl;
 }
};
class derived:public base1,public base2{
 int derived1,derived2;
 public:
 derived(int a,int b,int c,int d):base1(a),base2(b){
    derived1=c;
    derived2=d;
    cout<<"the derived class constructor is called"<<endl;
 }
 void printderived(){
    cout<<"the value of derived 1 is "<<derived1<<endl;
    cout<<"the value of derived 2 is "<<derived2<<endl;
 }
};
int main(){
    derived harry(1,2,3,4);
    harry.printdata1();
    harry.printdata2();
    harry.printderived();
    return 0;
}