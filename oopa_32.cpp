//array of objects
#include<iostream>
using namespace std;
class shop{
    int id;
    float price;
    public:
    void setdata(int a, int b){
        id=a;
        price=b;
    }
    void getdata(){
        cout<<"the id of the item is "<<id<<endl;
        cout<<"the price of the item is"<<price<<endl;
    }

};
int main(){
    int size=3;
    shop *ptr=new shop[size];
    shop*ptrtemp=ptr;
    int p;
    float q;
    for (int i = 0; i < size; i++)
    {
        cout<<"enter the id and price of item :"<<i+1<<endl;
        cin>>p>>q;
        ptr->setdata(p,q);
        ptr++;
    }
    for(int i=0;i<size;i++){
        cout<<"the id and price of an item :"<<i+1<<endl;
        ptrtemp->getdata();
        ptrtemp++;
    }

    
    return 0;
}