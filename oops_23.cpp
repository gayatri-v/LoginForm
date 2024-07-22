//file input and output using classes functions
#include<iostream>
#include<fstream>
using namespace std;
int main(){
    // string st="hii my name is gayatri";
    // ofstream out("oops_23.txt");//to write
    // out<<st;

    string a="hii i am gayatri";
    ofstream out("oops_23.txt");
    out<<a;

    // string st1;
    // ifstream in("oops_23b.txt");//to read
    // //in>>st1;
    // getline(in,st1);
    // cout<<st1;
    return 0;
}