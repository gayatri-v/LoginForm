//vector function
#include<iostream>
#include<vector>

using namespace std;

template<class T>
void display(vector<T> &v){
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    
}
int main(){
    vector<int>vec1;
    int size=5,element;
    // cout<<"enter the size of the vector"<<endl;
    // cin>>size;
    // for (int i = 0; i < size; i++)
    // {
    //     cout<<"enter the element to add into the vector: "<<endl;
    //     cin>>element;
    //     vec1.push_back(element);
    // }
    //vec1.pop_back();
    // display(vec1);
    // vector<int>::iterator iter=vec1.begin();
    // vec1.insert(iter,5,566);
    // display(vec1);

    vector<char>vec2(4);
    vec2.push_back('5');
    display(vec2);
    cout<<vec2.size()<<endl;

    vector<char>vec3(vec2);
    display(vec3);

    vector<double>vec4(4,12);
    display(vec4);
    cout<<vec4.size()<<endl;
    return 0;
}