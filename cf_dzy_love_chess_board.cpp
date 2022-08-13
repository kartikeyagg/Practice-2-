#include<bits/stdc++.h>
using namespace std;

bool check1(int i,int j,vector<string> &s,char k,int n,int m){
    // if(i ==0&& j==0)
    if(i>0 && s[i-1][j] ==k ){

            return 0;
    }
    // if(i<n-1 && s[i+1][j] == k){
    //     return 0;
    // }
    if(j>0 && s[i][j-1] == k){
        return 0;
    }
    // if(j<m-1 && s[i][j+1] ==k){
    //     return 0;
    // }
    return 1;

}

bool rec1(int i,int j, vector<string> &vec, int n,int m){

    if(i==n) return 1;
    if(j==m) return rec1(i+1,0,vec,n,m);
    if(vec[i][j] == '-') return rec1(i,j+1,vec,n,m);
    bool t,k;
    char prev;
    prev=vec[i][j] ;
    // t = check1(i,j,)
    vec[i][j] = 'B';
    t = check1(i,j,vec,'B',n,m);
    if(t){
        k = rec1(i,j+1,vec,n,m);
        if(k) return 1;
    }

    vec[i][j] = 'W';
    t = check1(i,j,vec,'W',n,m);
    if(t){
        k = rec1(i,j+1,vec,n,m);
        if(k) return 1;
    }
    vec[i][j] = prev;
    return 0;

}

int main() 
{  
    int n,m;
    cin>>n>>m;
    // vector<vector<int>> vec(n,vector<int> (m,0));
    vector<string> vec;
    string s;
    for (int i = 0; i < n; i++)
    {
        cin>>s;
        vec.push_back(s);
    }
    bool t = rec1(0,0,vec,n,m);
    for(auto x: vec){
        for(auto y: x){
            cout<<y;
        }
        cout<<endl;
    }

    

    // cout<<endl;
    return 0;
  }

