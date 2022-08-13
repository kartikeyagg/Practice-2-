#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int,int> &a,pair<int,int> &b){
    if(a.first == b.first){
        return a.second<b.second;
    }
    return a.first>b.first;
}

int main() 
{  
    int n,k;
    cin>>n>>k;
    k--;
    vector<pair<int,int>> vec;
    int a,b;
    for (int i = 0; i < n; i++)
    {
        cin>>a>>b;
        vec.push_back(make_pair(a,b));
    }
    sort(vec.begin(),vec.end(),cmp);
    // map<int,int> mp;
    pair<int,int> pr = {-1,-1};
    pair<int,int> curr = vec[k];
    int tk=k;
    k--;
    int count =0;

    while(k>=0 && vec[k].first == curr.first && vec[k].second==curr.second){
        count++;
        k--;
    }
    // int count =0;
    k = tk;
    while(k<n && vec[k].first == curr.first && vec[k].second==curr.second){
        count++;
        k++;
    }
    cout<<count;
    cout<<endl;
    return 0;
  }