#include<bits/stdc++.h>
using namespace std;

#define ll long long 
set<pair<int,ll>> st;
map<vector<int>  , ll> mp;

ll fun1(vector<vector<int> > &A , int ci, int peri ){
    // ci is current index
    // peri is previous index

    

    if(ci >= A.size()){
        return 0;
    }
    
    ll res = 10e11;
    ll temp;
    int ri =0;
    
    for(int i =0;i<3;i++){
        
        if(i !=peri ){// i is  not equal to the previous index; 
            if(mp.find({ci+1,i,peri}) !=mp.end()){
                // return mp[make_pair(ci,i)];
                temp = A[ci][i]+mp[{ci+1,i,peri}];
            }
            else{
                temp = A[ci][i]+ fun1(A,ci+1,i);
            }
            if(temp < res)
            {
                // res = max( temp, res);
                res = temp;
                ri = i;
            }
        }
        
    }
    // store day, house for that day and corresponding points;
    mp[{ci,ri,peri}] = res;
    return res;
}

int solve(vector<vector<int> > &A) {
    st.clear();
    mp.clear();

    return (fun1(A,0,-1));
    
}

  
int main() 
{  
    vector<vector<int>> vec ={ { 10,50,2},{4,100,1}};

    // ll res = fun1(vec,0,-1);
    ll res = solve(vec);

    cout<<"ans is "<<res;
    
    
    cout<<endl;
    return 0;
  }