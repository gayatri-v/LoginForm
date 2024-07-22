//constructor
#include<iostream>
using namespace std;

class simple{
  int dataa1;
  int dataa2;

  public:
     simple(int a,int b)
     {
        dataa1=a;
        dataa2=b;
     }
      void printdata();
};
void simple::printdata(void){
    cout<<"the numbers are "<<dataa1<<" and "<<dataa2<<endl;
}

int main(){
 simple ab(1,3);
 ab.printdata();

    return 0;
}