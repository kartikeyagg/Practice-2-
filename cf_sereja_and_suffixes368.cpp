#include<bits/stdc++.h>
using namespace std;
  
int main() 
{  
    
    int n,m; cin>>n>>m;
    
    set<int> st;
    vector<int> vec(n,0);
    int inp;
    for (int i = 0; i < n; i++)
    {
      cin>>vec[i];

    }
    for (int i = 0; i < m; i++)
    {
      cin>>inp;
      st.clear();
      inp--;
      for (int j = inp; j < n; j++)
      {
        st.insert(vec[j]);
      }
      // cout<<"#";
      cout<<st.size()<<endl;

    }
    
    
    cout<<endl;
    return 0;
  }