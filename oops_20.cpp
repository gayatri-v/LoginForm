//virtual base class in cpp
/*
 student------>test
 student------>sport
 test-------->result
 sport------->result
*/





#include<iostream>
using namespace std;
class student{
  protected:
   int roll_number;
  public:
    void set_number(int a){
        roll_number=a;
    }
    void print_number(){
        cout<<"the roll no is "<<roll_number<<endl;
    }
};
class test:virtual public student{
  protected:
   float maths, physics;
   public:
   void set_marks(float m1, float m2){
       maths=m1;
       physics=m2;
   }
   void print_marks(){
    cout<<"the marks in maths are "<<maths<<endl;
    cout<<"the marks in physics are "<<physics<<endl;
   }
};
class sport:virtual public student{ 
    protected:
    int points;
    public:
    void set_points(int a){
        points=a;
    }
    void score(){
        cout<<"the score in sport is "<<points<<endl;
    }
};

class result:public test,public sport{
    public:
    float total;
    void display(){
      total=maths+physics+points;
      print_number();
      print_marks();
      score();
      cout<<"the total marks obtained is "<<total<<endl;
    }
};
int main(){
    result harry;
    harry.set_number(1200);
    harry.set_marks(97.2,99.9);
    harry.set_points(8);
    harry.display();
    return 0;
}