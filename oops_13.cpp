//destructor

#include<iostream>
using namespace std;
int count=0;
class num{
 public:
 num(){
    count++;
    cout<<"this is the time when constructor called for number "<<count<<endl;
 }

 ~num(){
    cout<<"this is the time when destructor called for number "<<count<<endl;
    count--;
 }
};
int main(){
    cout<<"we are entring into the main function"<<endl;
    cout<<"create a object n1"<<endl;
    num n1;
    {
        cout<<"enter into the block"<<endl;
        cout<<"create two more objects n2,n3"<<endl;
        num n2,n3;
        cout<<"exit the block"<<endl;
    }
    cout<<"back to main"<<endl;
  return 0;
}