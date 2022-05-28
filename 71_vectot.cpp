#include<iostream>
#include<vector>

using namespace std;

template<class T>
void display(vector<T> &v){
    cout<<"Displaying this vector \n";
    cout<<"the size is "<<v.size()<<endl;

for (int i=0;i < v.size();i++){
    cout<<v[i]<<" "; // v.at(i) can also be used 
}
cout<<endl;
}


int main(){//ways to create a vector
    vector<int> vec1;  // zero lenght vector
    vector<int> veci(4); // 4 element int vector
    vector<char> vec2(4); // 4 element char vector
    vec2.push_back('y');
    veci.push_back(30);
    vector<char> vec3(vec2);// 4 element char vector from vec2    
    vector<int> v(6,3);// 6 element vector of 3s    
    vec3.push_back('t');
    cout<<"Displaying vec1"<<endl;
    display(vec1);
    cout<<"Displaying vec2"<<endl;
    display(vec2);
    cout<<"Displaying vec3"<<endl;
    display(vec3);
    cout<<"Displaying veci"<<endl;
    display(veci);
    cout<<"Displaying v"<<endl;
    display(v);
    cout<<v.front()<<endl;

    int element,size =5;
// for (int i = 0; i < 4; i++)
// {
//     cout<<"Enter an element to add to this vector ";
//     cin>>element;
//     vec1.push_back(element);}
// }   vec1.pop_back();
    // display(vec1);
    // vector<int> :: iterator iter = vec1.begin();//iterator is like a pointer
    // vec1.insert(iter+1,4,566);
    // cout<<"after insert:- \n";
    // display(vec1);


    return 0;
}