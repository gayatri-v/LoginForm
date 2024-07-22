//template with default parameters
#include<iostream>
using namespace std;

template<class t1=int,class t2=float,class t3=char>
class gayatri{
    public:
        t1 a;
        t2 b;
        t3 c;
        gayatri(t1 x,t2 y,t3 z){
            a=x;
            b=y;
            c=z;
        }
        void display(){
            cout<<"the value of a is "<<a<<endl;
            cout<<"the value of b is "<<b<<endl;
            cout<<"the value of c is "<<c<<endl;
        }
};
int main(){
    gayatri<>h(1,1.2,'v');
    h.display();
    cout<<endl;
    gayatri<float,char,char>g(2.3,'b','n');
    g.display();
    return 0;
}