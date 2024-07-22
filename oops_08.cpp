#include<iostream>
using namespace std ;
class y;
class x{
    int data;
    friend void add(x,y);
    public:
    void setvalue(int  value){
        data=value;
    }
};
class y{
    int num;
    friend void add(x,y);
    public:
    void setvalue(int value){
      num=value;
    }
};
void add(x o1, y o2){
    cout<<"the result is"<<o1.data+o2.num<<endl;
}
int main(){
    x a;
    y b;
    a.setvalue(1);
    b.setvalue(4);
    add(a,b);
    return 0;
}