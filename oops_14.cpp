// #include<iostream>
// using namespace std;
// class employee{
   
   
//    public:
//    int id;
//    int salary;
//    employee(int inpid){
//      id=inpid;
//      salary=34;
//    }
//    employee(){}
// };
// class programmer:employee{
//     public:
//     int languagecode;
//     programmer(int inpid){
//         id=inpid;
//         languagecode=9;
//     }
//     void getdata(){
//         cout<<id<<endl;
//     }
// };
// int main(){
//     employee harry(1),rohan(2);
//     cout<<harry.salary<<endl;
//     cout<<rohan.salary<<endl;
//     programmer riya(10);
//     cout<<riya.id<<endl;
//     riya.getdata();

//     return 0;
// }

//here we cannot onherit the id from the employee class as visibity mode is private so it automaticlly get's perivate
//we have to make it public to inherit from the employee class

#include<iostream>
using namespace std;
class employee{
   
   
   public:
   int id;
   int salary;
   employee(int inpid){
     id=inpid;
     salary=34;
   }
   employee(){}
};
class programmer:public employee{
    public:
    int languagecode;
    programmer(int inpid){
        id=inpid;
        languagecode=9;
    }
    void getdata(){
        cout<<id<<endl;
    }
};
int main(){
    employee harry(1),rohan(2);
    cout<<harry.salary<<endl;
    cout<<rohan.salary<<endl;
    programmer riya(10);
    cout<<riya.id<<endl;
    riya.getdata();

    return 0;
}
