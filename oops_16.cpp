//multilevel inheritance

#include<iostream>
using namespace std;
class student{
    protected:
    int roll_number;
    public:
    void setdata(int );
    void getdata(void);
};
void student::setdata(int r){
    roll_number=r;
}
void student::getdata(){
    cout<<"the roll number is "<<roll_number<<endl;
}

class marks:public student{
    protected:
    float maths;
    float physics;
    public:
    void setmarks(float m1,float m2);
    void getmarks(void);
};
void marks::setmarks(float m1,float m2){
    maths=m1;
    physics=m2;
}
void marks::getmarks(void){
        cout<<"the maths marks is "<<maths<<endl;
        cout<<"the physics marks is "<<physics<<endl;
}

class result:public marks{
    public:
    float result;
    void getresult(){
        getdata();
        getmarks();
        cout<<"the result is "<<(maths+physics)/2<<"%"<<endl;
    }
};
int main(){
    result harry;
    harry.setdata(1);
    harry.setmarks(99,99);
    
    harry.getresult();
    return 0;
} 
