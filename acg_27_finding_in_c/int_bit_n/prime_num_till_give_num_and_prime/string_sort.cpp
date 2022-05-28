#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
  
bool cmp(char a, char b){
    return a>b;
}

int main() 

{  string a  = "543043";
    sort(a.begin(),a.end(),cmp);
    cout<<a;
    
    
    cout<<endl;
    return 0;
  }