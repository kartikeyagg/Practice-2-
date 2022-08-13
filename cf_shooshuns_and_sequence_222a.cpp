#include<bits/stdc++.h>
using namespace std;
  
int main() 
{  
    int n,k;
    cin>>n>>k;
    k--;
    int t,inp;
    vector<int> vec;
    for (int i = 0; i < n; i++)
    {
        cin>>inp;
        vec.push_back(inp);
    }
    t = vec[k];
    for (int i = k; i < n; i++)
    {
        if(vec[i] != t){
            cout<<"-1"<<endl;return 0;
        }
    }
    int ind=k-1,count =0;
    while(ind >=0 && vec[ind] ==t){
        count++;
        ind--;
    }
    
    cout<<k-count;
    cout<<endl;
    return 0;
  }