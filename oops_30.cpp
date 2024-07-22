//pointers
#include<iostream>
using namespace std;
int main(){
    int a=4;
    int *ptr=&a;
    *ptr =999;
    cout<<"the value of a at address ptr is "<<*ptr<<endl;

    //new and delete operator
    int *P=new int(9);
    cout<<"the value of the new integer at pointer p is "<<*P<<endl;
    float *b=new float(88.90);
    cout<<"the value of the new integer at pointer b is "<<*b<<endl;

    int *arr =new int[3];
    arr[0]=1;
    arr[1]=2;
    arr[2]=3;
    delete[] arr;
    cout<<"the value of arr[0] is "<<arr[0]<<endl;
    cout<<"the value of arr[1] is "<<arr[1]<<endl;
    cout<<"the value of arr[2] is "<<arr[2]<<endl;

    return 0;
}