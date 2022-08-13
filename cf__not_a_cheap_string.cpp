#include<bits/stdc++.h>
using namespace std;
# define ll long long
bool cmp(pair<char,int> &a,pair<char,int> &b){

    return a.first > b.first;

}
bool cmp1(pair<char,int> &a,pair<char,int> &b){
    return a.second<b.second;
}


void  solve(string &s, ll p){

    vector<pair<char,int>> vec;
    ll sum = 0;
    for(auto x: s){
        sum+=(x-96);
    }
    // cout<<"the sum is "<<sum<<endl;
    if(sum<=p) return ;
    for (int i = 0; i < s.size(); i++)
    {
        vec.push_back({s[i],i});
    }
    sort(vec.begin(),vec.end(),cmp);
    // cout<<"vec is "<<endl;
    // for(auto x: vec){
    //     cout<<"("<<x.first<<","<<x.second<<") ";
    // }
    // cout<<endl;
    int ind = 0;
    while(ind < vec.size() && sum>p){

        sum -= vec[ind].first-96;
        // cout<<"sum is "<<sum<<endl;
        ind++;
    }
    // cout<<"ind is "<<ind<<endl;
    if(ind == vec.size()) {s = "";return ;}

    sort(vec.begin()+ind,vec.end(),cmp1);
    s = "";
    for (int j = ind; j < vec.size(); j++)
    {
        s+= vec[j].first;
    }
    // cout<<"s is "<<s<<endl;
    return;

}
  
int main() 
{  
    int n,t;
    cin>>n;
    string s;
    for (int i = 0; i < n; i++)
    {
        cin>>s;
        cin>>t;
        solve(s,t);
        // cout<<"\nans is ";
        cout<<s<<endl;
        
    }
    
    
    // cout<<endl;
    return 0;
  }