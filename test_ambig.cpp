#include<bits/stdc++.h>
using namespace std;

int fun1(int & a, int & b){

    return a+b;
}

int main() 
{  
    int a = 4;
    int rs  =fun1(a,a);
    
    cout<<rs<<" \n";
    cout<<endl;
    return 0;
  }