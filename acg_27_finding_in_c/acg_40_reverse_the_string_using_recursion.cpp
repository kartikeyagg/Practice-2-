//Reversing a string using recursion
#include <iostream>
#include <string>
#include <vector>
using namespace std;

void reverses(string st){
    if(st.length() == 0){
        return;
    }
    string str2 = st.substr(1); // substr(1) gives string from 1 index to last index avoiding the zeroth
    reverses(str2);
    cout<<st[0];

}

int main() 
{   string str={"Binod"};
    reverses(str);
    
    
    cout<<endl;
    return 0;
  }