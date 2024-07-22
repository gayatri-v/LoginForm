//intialization in cpp
#include<iostream>
using namespace std;
class test{
 int a;
 int b;
 public:
 //test(int i,int j):a(i),b(j)
 //test(int i,int j):a(i),b(i+j)
 test(int i,int j):a(i),b(a+j)
 {
    cout<<"the initializtaion is executed in the constructor"<<endl;
    cout<<"the value of a is "<<a<<endl;
    cout<<"the value of b is "<<b<<endl;
 }
};
int main(){
    test harry(3,4);
    return 0;
}