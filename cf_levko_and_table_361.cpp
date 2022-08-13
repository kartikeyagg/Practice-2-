#include<bits/stdc++.h>
using namespace std;
  
int main() 
{  
    int n,k;
    cin>>n>>k;
    int t = k/n;
    int m = t*n;
    vector<int> vec;
    for (int i = 0; i < n; i++)
    {
        vec.push_back(t);
    }
    int j =0;
    while(j<n && m<k){

        vec[j]+=1;
        m++;
        j++;

    }
    for (int i = 0; i < n; i++)
    {
        for (int h = 0; h < n; h++)
        {
            cout<<vec[(h+i)%n]<<" ";
        }
        cout<<endl;
        
    }
    
    
    cout<<endl;
    return 0;
  }
/*
for(auto x: vec){
        cout<<x<<" ";
    }cout<<endl;
*/    