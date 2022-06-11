#include<bits/stdc++.h>
using namespace std;

void display1(vector<int> & ar){
    if(ar.empty()){
        cout<<"emp"<<endl;return;
    }
    for(auto x: ar){
        cout<<x<<" ";

    }
    cout<<endl;

}

set<vector<int> > st;
vector<vector<int>> vi;

void rec(int ind, vector<int> ar, vector<int> &gv){

    // cout<<"fdasdf"<<endl;

    if(ind>=gv.size()){
        // display1(ar);
        st.insert(ar);
        return;
    }
    // cout<<"1dfsa2"<<endl;
    rec(ind+1,ar,gv);
    ar.push_back(gv[ind]);
    rec(ind+1,ar,gv);
    ar.pop_back();
    // rec(ind+1,ar,gv);
    return ;
}

int main() 
{  vector<int> gv = {1,2,3,4};

    st.clear();vi.clear();
    vector<int> emp;
    rec(0,emp,gv);

    for(auto x: st){
        vi.push_back(x);
    }
    for(auto x:vi){
        display1(x);
    }
    cout<<endl;
    return 0;
  }