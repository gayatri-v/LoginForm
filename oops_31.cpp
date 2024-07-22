//pointers to objects and array operstor in c++
#include<iostream>
using namespace std;

class complex{
    int real,imaginary;
    public:
    void setdata(int a,int b){
        real=a;
        imaginary=b;
    }
    void getdata(){
        cout<<"the real part is "<<real<<endl;
        cout<<"the imaginary part is "<<imaginary<<endl;
    }
};
int main(){
    complex c1;
    // c1.setdata(1,3);
    // c1.getdata();
    //complex *ptr=&c1;
    // (*ptr).setdata(1,4);
    // (*ptr).getdata();
    complex *ptr=new complex;
    ptr->setdata(1,5);
    ptr->getdata();
    cout<<endl;
    complex *arr=new complex[3];
    arr->setdata(3,4);
    arr->getdata();
    return 0;
}