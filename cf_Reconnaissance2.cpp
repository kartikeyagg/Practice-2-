
#include<bits/stdc++.h>
using namespace std;
  
int main() 
{  
    int n;cin>>n;
    vector<int> vec;
    int k;
    for (int i = 0; i < n; i++)
    {
        cin>>k;
        vec.push_back(k);
    }
    pair<int,int> res;
    int mit = INT_MAX-1000;
    for (int i = 0; i < n; i++)
    {
        k = abs(vec[i]-vec[(i+1)%n]);
        if(k<mit){
            mit = k;
            res.first = i;
            res.second = (i+1)%n;
        }
    }
    
    cout<<res.first+1<<" "<<res.second+1<<endl;

    cout<<endl;
    return 0;
  }