#include<bits/stdc++.h>
using namespace std;
  
int main() 
{  
    int n = 4;
    unordered_set<int> t;
    int a;
    for (int i = 0; i < 4; i++)
    {
        cin>>a;
        t.insert(a);
    }
    cout<<4-t.size()<<endl;
    
    
    cout<<endl;
    return 0;
  }