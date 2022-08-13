#include<bits/stdc++.h>
using namespace std;
int solve(int k){
    
    // set<int> st;
    unordered_set<int> st;
    int t =k;
    while(st.size()<4){
        t = k;
        st.clear();
        while(t>0){
            st.insert(t%10);
            t = t/10;
        }
        k++;

    }
    return --k;

}

  
int main() 
{  
    int k;
    cin>>k;
    k++;
    k= solve(k);
    cout<<k<<endl;
    cout<<endl;
    return 0;
  }