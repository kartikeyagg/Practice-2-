#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;
  
int main() 
{  int n = 536870912;
double val;
    for (int i = 2; i*i < n+1; i++)
    {
        val = log(n)/log(i);
        if(val - int(val)==0){
            cout<<" a is "<<i<<endl;
            cout<<"b is "<<val<<endl;
            cout<<"ans is 1"<<endl;
            return 1;
        }

    }


    

    
    cout<<"ans is 0"<<endl;
    
    cout<<endl;
    return 0;
  }