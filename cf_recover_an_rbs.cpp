#include<bits/stdc++.h>
using namespace std;

int rec1(int i, string &s,stack<int> &st,vector<vector<int>> &memo){
// int rec1(int i, string &s,stack<int> &st){

    if(i>=s.size()){
        if(st.empty()){
            return 1;
        }
        return 0;
    }
    // i and st.size are the changing params
    if(memo[i][st.size()] != -22){
        return memo[i][st.size()];
    }
    if(s[i] !='?'){
        int tk=0;
        if(s[i] == '('){
            st.push(1);
            tk = rec1(i+1,s,st,memo);
            // tk = rec1(i+1,s,st);
            st.pop();
        }
        else{ 
            //s[i] = ')'
            if(st.empty()){
                return memo[i][st.size()]=0;
                // return 0;
            }
            st.pop();
            tk = rec1(i+1,s,st,memo);
            // tk = rec1(i+1,s,st);
            st.push(1);
        }
        return tk;
    }
    int t=0;int p =0;
    s[i] = '(';
    st.push(1);
    t = rec1(i+1,s,st,memo);
    // t = rec1(i+1,s,st);

    st.pop();
    s[i] = '?';
    if(t==-1){
        return memo[i][st.size()]=-1;
        return -1;
    }

    if(!st.empty()){
        st.pop();
        s[i] = ')';
        p = rec1(i+1,s,st,memo);
        // p = rec1(i+1,s,st);
        
        s[i] = '?';
        st.push(1);
        if(p==-1){
        return memo[i][st.size()]=-1;
        // return -1;
        }
    }
    //
    if(t && p){
        return memo[i][st.size()]=-1;
        // return -1;
    }
    if(t||p){
        return memo[i][st.size()]=1;
        // return 1;
    }
    return memo[i][st.size()]=0;
    // return 0;

}
  
int main() 
{  
    
    int n;
    cin>>n;
    string s;
    int res;
    stack<int> st;
    vector<vector<int>> memo;
    for (int i = 0; i < n; i++)
    {   
        st = {};
        cin>>s;
        memo = vector<vector<int>>(s.size()+1,vector<int>((s.size()/2)+2,-22));
        res = rec1(0,s,st,memo);
        // res = rec1(0,s,st);
        cout<<"res is "<<res<<endl;
        if(res == 1){ //|| res == 0
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
    
    cout<<endl;
    return 0;
  }