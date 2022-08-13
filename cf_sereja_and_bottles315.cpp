#include<bits/stdc++.h>
using namespace std;
  
int main() 
{  
    int n;
    cin>>n;
    int a,b;
    map<int,int> st;
    multimap<int,int> mp;
    for (int i = 0; i < n; i++)
    {
        cin>>a>>b;
        mp.insert({a,b});
        // st.insert(a);
        st[a]++;

        
    }
    // set<int> gy;
    // cout<<"######"<<endl;
    int count = 0;
    int flag =0;
    set<int> kt;
    for(auto x: mp){
        // cout<<x.first<<" "<<x.second<<endl;
        // && flag==0 
        if(st.find(x.second) == st.end()) continue;
        if(x.second == x.first && st[x.second]<2 && kt.find(x.second) == kt.end() ) {
            continue;
        }
        if(x.second == x.first){

            if(kt.find(x.second)!=kt.end()){
                // cout<<"found it"<<endl;
                count +=st[x.second];
                st[x.second] =0;
                continue;
            }
            kt.insert(x.second);
            count +=(st[x.second]-1);
            st[x.second] =1;
            continue;

        }
        count +=st[x.second];
        st[x.second] =0;
        }
    
    // cout<<st.size()-gy.size()<<endl;
    cout<<n-count<<endl;
    
    // cout<<endl;
    return 0;
  }
  /*
  if(flag == 1){
                count +=(st[x.second]);
                st[x.second] =0;
                continue;
            }
            */