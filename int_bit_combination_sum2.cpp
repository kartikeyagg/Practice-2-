#include<bits/stdc++.h>
using namespace std;

set<vector<int>> st;

void display1(vector<int> & ar){
    if(ar.empty()){
        cout<<"emp"<<endl;
        return ;
    }
    for(auto x: ar){
        cout<<x<<" ";

    }
    cout<<endl;

}

void rec1(int i,vector<int> ar, vector<int> & gv, int sum, int k){

    if(i>=gv.size()){
        if(sum == k){
            // display1(ar);
            st.insert(ar);
        }
        return ;
    }

    ar.push_back(gv[i]);
    rec1(i+1,ar,gv,sum+gv[i],k);
    ar.pop_back();
    rec1(i+1,ar,gv,sum,k);
    return ;

}

  
int main() 
{   
    vector<int> gv = {10,1,2,7,6,1,5};
    int k = 8;
    st.clear();
    sort(gv.begin(),gv.end());
    vector<int> emp = {};
    int sum =0 ;
    rec1(0,emp,gv,0,k);

    vector<vector<int>> vi;

    for(auto x:st){
        vi.push_back(x);
    }

    for(auto x:vi){
        for(auto y:x){
            cout<<y<<" ";
        }
        cout<<endl;
    }
    
    cout<<endl;
    return 0;
  }