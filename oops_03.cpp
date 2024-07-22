#include<iostream>
using namespace std;

class employee{
    static int count;
    int id;
    public:
       void getdata(void){
        cout<<"enter the employee id"<<endl;
        cin>>id;
        count++;
       }
        void displaydata(void){
        cout<<"employee are"<<id<<endl;
        }
        static void getcount(void){
            cout<<"count of the employees are"<<count<<endl;
        }
};
int employee::count;
int main()
{
  
  employee harry,rohan,lovish;
  harry.getdata();
  harry.displaydata();
harry.getcount();
   rohan.getdata();
  rohan.displaydata();
rohan.getcount;
   lovish.getdata();
  lovish.displaydata();
  lovish.getcount();
return 0;
}
