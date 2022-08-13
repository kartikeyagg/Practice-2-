#include<bits/stdc++.h>
using namespace std;
  
int main() 
{  
    int t;
    cin>>t;
    int n;int k;int count=0;
    vector<int>vec;int res =0;
    for (int i = 0; i < t; i++)
    {   
        count =0;res =0;
        cin>>n;
        vec.clear();
        for (int j = 0; j < n; j++)
        {
            cin>>k;
            vec.push_back(k);
        
            
        }
        int h =0;
        while(vec[h]==0){
            h++;
        }
        for (int j = h; j < n-1; j++)
        {
            if(vec[j] == 0) count++;
            else res+=vec[j];
        }

        
        // cout<<"ans is "<<res+count<<endl;
        cout<<res+count<<endl;

    }
    
    // cout<<endl;
    return 0;
  }