//constructor dynamiclly allocation of constructor
class bankdeposit{
  int principal;
  int returnvalue;
  int interestrate;
  int years;
   
   public:
   bankdeposit(){}
   bankdeposit(int p,int y,float r){
    principal=p;
    years=y;
    interestrate=float(r)/100;
    returnvalue=principal;
    for (int i = 0; i < y; i++)
    {
        /* code */
        returnvalue=returnvalue*(1+interestrate);
    }
    

   }
   bankdeposit(int p,int y,int r){
    principal=p;
    years=y;
    interestrate=int(r)/100;
    returnvalue=principal;
    for (int i = 0; i < y; i++)
    {
        /* code */
        returnvalue=returnvalue*(1+interestrate);
    }
    

   }

   void show();
};
void bankdeposit :: show(){
    cout<<"pricipal maount was "<<principal<<" return value after "<<years<<" years is "<<returnvalue<<endl;
}

#include<iostream>
using namespace std;
int main(){
    bankdeposit bd1,bd2,bd3;
    int p ,y;
    float r;
    int R;
    cout<<"enter the value of principal and years and rate"<<endl;
    cin>>p>>y>>r;
    bd1=bankdeposit(p,y,r);
    bd1.show();

    cout<<"enter the value of principal and years and rate"<<endl;
    cin>>p>>y>>R;
    bd2=bankdeposit(p,y,R);
    bd2.show();

    return 0;
}