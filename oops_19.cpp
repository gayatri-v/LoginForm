//ambiguity in inheritance due to same name of functions in the class
#include<iostream>
using namespace std;
class base1{
  public:
  void greet(){
    cout<<"good morning"<<endl;
  }
};

class base2{
  public:
  void greet(){
    cout<<"good evening"<<endl;
  }
};

class derived:public base1,public base2{
   public:
   void greet(){
    base1::greet();
   }
};

class b{
    public:
      void get(){
         cout<<"hello world"<<endl;
      }
};
class d:public b{
    // public:
    // void get(){
    //     cout<<"how are you"<<endl;
    // }
};
int main(){
    // derived d;
    // d.greet();
    b bob;
    bob.get();
    d harry;
    harry.get();
    return 0;
}