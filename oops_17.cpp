//multiple inheritance
#include<iostream>
using namespace std;
class base1{
 protected:
 int base1int;
 public:
 void setdata1 (int a){
    base1int=a;
 }
};
class base2{
protected:
int base2int;
public:
void setdata2(int a){
    base2int=a;
}
};
class derived:public base1,public base2{
public:
void show(){
    cout<<"the valuse of base 1 is "<<base1int<<endl;
    cout<<"the valuse of base 2 is "<<base2int<<endl;
    cout<<"the sum of base 1 and base 2 is "<<base1int+base2int<<endl;
}
};
int main(){
    derived harry;
    harry.setdata1(2);
    harry.setdata2(3);
    harry.show();
    return 0;
}
