#include <iostream>
#include <string>
using namespace std;
// oops- classes and objects
    // class- extension of structures
    // class can have methods and properties
    // class can make few men=mbers few as private and public
    // classes-structures+more
    // you can declare objects along with the class declaration like this:
    /*class employee{
        class defination
    }harry,robin;*/
    // harry.salaary =8 make no sense if salary is private

    // Nesting of member function
class binary
{
    string s;

public:
    void read(void);
    void chk_bin(void); // method
    void once(void);
    void display(void);
};
void binary ::read(void)
{
    cout << "enter binary number" << endl;
    cin >> s;
}
void binary ::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "incorrect binary program" << endl;
            exit(0);
        }
    }
}
void binary ::once(void){
    for (int i = 0; i < s.length(); i++)
    {
        if(s.at(i)=='0')
        {
            s.at(i)='1';
        }
        else;
        {
            s.at(i)='0';
        }
    }
}
void binary :: display(void){
    cout<<"displaying your bianry number"<<endl;
    for (int i = 0; i < s.length(); i++)
    {
       
    cout<<s.at(i);
    }
    cout<<"\n";
}

int main()
{
    

    binary b; // b is the object
    b.read();
    b.chk_bin();
    b.once();
    b.display();
    return 0;
}