#include<bits/stdc++.h>
using namespace std;
  
int main() 
{  
    vector<int> vec(3,0);

    for (int i = 0; i < 3; i++)
    {
        cin>>vec[i];
    }
    
    int a,b,c;

    a = sqrt((vec[0]*vec[1])/vec[2]);
    b = sqrt((vec[0]*vec[2])/vec[1]);
    c = sqrt((vec[1]*vec[2])/vec[0]);

    cout<<4*(a+b+c)<<endl;
    
    cout<<endl;
    return 0;
  }