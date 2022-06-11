
#include<bits/stdc++.h>
using namespace std;

set<vector<string>> st;
// unoredered_set<vector<string>> st;
string spa;
bool ispallin(string &so,int t, int p)

{   
    // spa = so.substr(); //
    // for(int i =0;i<(spa.size()/2);i++){
    //     if(spa[i] != spa[spa.size()-i-1]){
    //         return 0;
    //     }
    // }
    // return 1;

    while(t<p){
        if(so[t] == so[p]){
            t++;
            p--;
        }
        else{
            return 0;
        }
    }
    return 1;
}

void parti(string &s ,vector<string> &vi ,int k){  // pop vi before returning
    // starting values are
    // vi {}, k =-1,j=0;
    // k is first_index-1
    // k represents the left bar, and j the right; 
    int tk =0;

    // cout<<"k is "<<k<<endl;
    int n = s.size();
    // cout<<"limit is "<<n-1<<endl;
    
    if(k >= n-1){  //2
        // cout<<"tk"<<endl;
        // base case;
        st.insert(vi);
        return ;
    }
    tk =1;
    while(k+tk<n){
        // cout<<"1\n";
        // cout<<"ki is "<<k<<endl;
        // cout<<"k+tk is "<<tk+k<<endl;
        if(ispallin(s,k+1,k+tk)){
            // cout<<"rt \n";
            vi.push_back(s.substr(k+1,tk));
            // cout<<s.substr(k+1,tk)<<endl;
            parti(s,vi,k+tk);
            // cout<<vi.back()<<endl;
            vi.pop_back();

        }
        tk++;

    }
    // cout<<"return for k == "<<k<<endl;

    return ;
}
  
int main() 
{   
    string s="aab";

    st.clear()  ;
    vector<string> emp;
    parti(s,emp,-1);
    cout<<"size of st is "<<st.size()<<endl;
    for(auto x: st){
        for(auto y:x){
            cout<<y<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    return 0;
  }