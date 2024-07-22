//exercise
#include<iostream>
#include<cmath>
using namespace std;

class simplecalculator{
    int a;
    int b;
    public:
    void setdatasimple(){
        cout<<"enter the value of a "<<endl;
        cin>>a;
        cout<<"enter the value of b "<<endl;
        cin>>b;
    }
    void operationsimplecalculator(){
        cout<<"the ans of a+b is "<<a+b<<endl;
        cout<<"the ans of a-b is "<<a-b<<endl;
        cout<<"the ans of a*b is "<<a*b<<endl;
        cout<<"the ans of a/b is "<<a/b<<endl;
    }

};

class scientificcalculator{
    int a;
    int b;
    public:
    void setdatascientific(){
        cout<<"enter the value of a "<<endl;
        cin>>a;
        cout<<"enter the value of b "<<endl;
        cin>>b;
    }
    void operationscientific(){
        cout<<"the ans of cos(a) is "<<cos(a)<<endl;
        cout<<"the ans of sin(b) is "<<sin(b)<<endl;
        cout<<"the ans of tan(a) is "<<tan(a)<<endl;
        cout<<"the ans of exp(a) is "<<exp(a)<<endl;
    }


};

class hybridcalculations:public simplecalculator,public scientificcalculator{

};

int main(){
    hybridcalculations harry;
    harry.setdatasimple();
    harry.operationsimplecalculator();
    harry.setdatascientific();
    harry.operationscientific();
    return 0;
}