#include<bits/stdc++.h>
using namespace std;
  
int main() 
{  
    set<int> st = {4,7,47,74,474,477,744,747};

    int n;
    cin>>n;
    for(auto x: st){

        if(n%x==0){
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO";
    cout<<endl;
    return 0;
  }