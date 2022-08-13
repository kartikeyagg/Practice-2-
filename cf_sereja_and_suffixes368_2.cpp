#include<bits/stdc++.h>
using namespace std;
  
int main() 
{  
    int n,m;
    cin>>n>>m;
    vector<int>vec(n,0);
    for (int i = 0; i < n; i++)
    {
        cin>>vec[i];
    }
    set<int> st;
    vector<int> suff(n,0);
    for(int i = n-1;i>=0;i--){
        st.insert(vec[i]);
        suff[i] = st.size();
    }
    // suff.push_back(0);
    int inp;
    for (int i = 0; i < m; i++)
    {
        cin>>inp;
        // cout<<"#";
        cout<<suff[inp-1]<<endl;
    }
    
    
    cout<<endl;
    return 0;
  }