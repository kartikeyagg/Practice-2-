#include<bits/stdc++.h>
using namespace std;
  
int main() 
{  
    int t;
    cin>>t;
    int k;
    int h;
    vector<int> vec(3,0);
    for (int i = 0; i < t; i++)
    {
        cin>>k;
        for (int j = 0; j < 3; j++)
        {
            cin>>vec[j];
        }
        if(vec[k-1]==0 || vec[k-1] == k){
            cout<<"NO"<<endl;
        }
        else {
            h = vec[k-1];
            if(vec[h-1] == 0 || vec[h-1] == h|| vec[h-1] == k){
                cout<<"NO"<<endl;
            }
            else cout<<"YES"<<endl;
        }
        
    }
    
    cout<<endl;
    return 0;
  }