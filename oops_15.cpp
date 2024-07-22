// #include<iostream>
// using namespace std;
// class base{
//     int data1;
//     public:
//     int data2;
//     void setdata();
//     int getdata1();
//     int getdata2();

// };
// void base::setdata(void){
//     data1=10;
//     data2=20;
// }
// int base::getdata1(){
//     return data1;
// }
// int base::getdata2(){
//     return data2;
// }
// class derived:public base{
//     int data3;
//     public:
//     int process();
//     int display();
// };

// int derived::process(){
//     data3=data2*getdata1();
// }
// int derived::display(){
//     cout<<"the value of data1 is "<<getdata1()<<endl;
//     cout<<"the value of data2 is "<<data2<<endl;
//     cout<<"the value of data3 is "<<data3<<endl;
// }
// int main(){
//     derived a;
//     a.setdata();
//     a.process();
//     a.display();
//     return 0;
// }

//for private

#include<iostream>
using namespace std;
class base{
    int data1;
    public:
    int data2;
    void setdata();
    int getdata1();
    int getdata2();

};
void base::setdata(void){
    data1=10;
    data2=20;
}
int base::getdata1(){
    return data1;
}
int base::getdata2(){
    return data2;
}
class derived:private base{
    int data3;
    public:
    int process();
    int display();
};

int derived::process(){
    setdata();
    data3=data2*getdata1();
}
int derived::display(){
    cout<<"the value of data1 is "<<getdata1()<<endl;
    cout<<"the value of data2 is "<<data2<<endl;
    cout<<"the value of data3 is "<<data3<<endl;
}
int main(){
    derived a;
    
    a.process();
    a.display();
    return 0;
}