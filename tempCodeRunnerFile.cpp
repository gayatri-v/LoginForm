#include<iostream>
#include<fstream>
#include<windows.h>
#include<sstream>
using namespace std;
class Login{
    private:
    string LoginId,Password;
    public:
    Login():LoginId(""),Password(""){}

    void setId(string id){
        LoginId=id;
    }
    void setPassword(string pass){
        Password=pass;
    }
    string getId(){
        return LoginId;
    }
    string getPassword(){
        return Password;
    }
};
registration(Login user){
    system("cls");
    string id,pass;
    cout<<"\t Enter Login ID : ";
    cin>>id;
    user.setId(id);
    start:
    cout<<"\t Enter YOur Password: ";
    cin>>pass;
    if(pass.length()>=8)
   { user.setPassword(pass);}
   else{
    cout<<"\t Enter Minimum 8 Character\n";
    goto start;
   }
   ofstream outfile("D:/Login.txt",ios::app);
   if(!outfile){
    cout<<"\tFile cannnot Open"<<endl;

   }else{
    outfile<<"\t"<<user.getId()<<":"<<user.getPassword()<<endl<<endl;
    cout<<"\tUser Registered Successfully!!";
   }
   outfile.close();
    Sleep(3000);
}
int main(){
    Login user;
    bool exit=false;
    while(!exit){
      system("cls");
      int val;
      cout<<"\tWelcome to Registration and Login Form"<<endl;
      cout<<"\t--------------------------------------"<<endl;
      cout<<"\t 1. Register"<<endl;
      cout<<"\t 2. Login"<<endl;
      cout<<"\t 3. Exit"<<endl;
      cout<<"\t Enter Choice";
      cin>>val;

      if(val==1){
        registration(user);
      }
      Sleep(3000);
    }
}