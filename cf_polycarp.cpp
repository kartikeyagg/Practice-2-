#include<bits/stdc++.h>
using namespace std;

int days(string &s){
    if(s.empty()) return 0;
    int n = s.size();
    // string temp;
    unordered_set<char> st;
    int c=0;
    for (int i = 0; i < n; i++)
    {
        
        st.insert(s[i]);
        if(st.size() == 4){
            c++;
            st.clear();
            st.insert(s[i]);
        }


    }
    if(!st.empty()){
        c++;
    }
    
return c;
}
  
int main() 
{  
    int k;
    string t;
    cin>>k;
    for (int i = 0; i < k; i++)
    {
        cin>>t;
        cout<<days(t)<<endl;
    }
    
    
    cout<<endl;
    return 0;
  }