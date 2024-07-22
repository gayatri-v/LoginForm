//file open and eof functions
#include<iostream>
#include<fstream>
using namespace std;
int main(){
    // ofstream s;
    // s.open("oops_23.txt");
    // s<<"hii this is me gayatri";
    // s.close();
     
    string s1;
    ifstream in;
    in.open("oops_23.txt");
    // in>>s1;
    // cout<<s1;
    while(in.eof()==0){
        getline(in,s1);
        cout<<s1;
    }
    return 0;
}