//functions template
#include<iostream>
using namespace std;
template<class t1=int,class t2=int>
float devide(t1 a,t2 b){
    float d=0;
    d=(a+b)/2.0;
    return d;
}
int main(){
    float a=devide(5,2);
    cout<<"the ans of the division is "<<a<<endl;
    return 0;
}