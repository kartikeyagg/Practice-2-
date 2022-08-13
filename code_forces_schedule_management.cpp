#include<bits/stdc++.h>
using namespace std;

int solve(int n,int m, vector<int> &vec){
    //cout<<endl;
    vector<int> arr(n+1,0);
    for(auto x:vec){
        arr[x]+=1;
    }
    // for(auto x: arr){
    //     //cout<<x<<" ";
    // }
    //cout<<endl;
    sort(arr.begin(),arr.end());
    multiset<int> st;
    int fl = 0;
    for(auto x:arr){
        if (fl==0){fl ++; continue;}
        st.insert(x);
    }
    // //cout<<*(++st.begin())<<endl;
    // for(auto x: st){ 
    //     //cout<<x<<" ";
    // }
    int mx,mn;
    while( *(--st.end())-*(st.begin()) >1){
        mn = *(st.begin());
        mx = *(--st.end());
        st.erase(st.begin());
        st.erase(--st.end());
        st.insert(mn+2);
        st.insert(mx-1);

    }
//cout<<endl;
return *(--st.end());
}
  
int main() 
{  
    int k = 0;
    cin>>k;
    // k =1;
    int n,m,t;
    vector<int> vec;
    for (int i = 0; i < k; i++)
    {   
        cin>>n>>m;
        vec.clear();
        for (int j = 0; j < m; j++)
        {   
            cin>>t;
            vec.push_back(t);
        }
        // //cout<<solve
        t = solve(n,m,vec);
        cout<<t<<endl;
        //cout<<endl;
        
    }
    
    
    //cout<<endl;
    return 0;
  }
