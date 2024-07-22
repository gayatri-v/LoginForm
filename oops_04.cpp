#include<iostream>
using namespace std;

class employee{
    int id;
    int salary;
    
    public:
    void setdata(void){
         salary =122;
         cout<<"enter the id of the employee"<<endl;
         cin>>id;
    }
    void getdata(void){
        cout<<"id of the employee is "<<id<<endl;
            }
};

int main(){
    // employee harry,lovish,shruti;
    // harry.setdata();
    // harry.getdata();

    employee fb[4];
    for (int i = 0; i < 4; i++)
    {
        fb[i].setdata();
        fb[i].getdata();
    }
    
    return 0;

}