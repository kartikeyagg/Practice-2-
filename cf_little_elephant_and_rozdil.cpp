#include<bits/stdc++.h>
using namespace std;
  
int main() 
{  
    int n;
    cin>>n;
    vector<int> vec(n,0);
    for (int i = 0; i < n; i++)
    {
        cin>>vec[i];
    }
    int mint = INT_MAX;
    int mini = 0;
    for (int i = 0; i < n; i++)
    {
        if(vec[i]<mint){
            mint = vec[i];
            mini = i;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if(i== mini) continue;
        
        if(vec[i] == mint) {
            cout<<"Still Rozdil\n";
            return 0;
        }

    }
    
    cout<<mini+1<<endl;
    
    cout<<endl;
    return 0;
  }