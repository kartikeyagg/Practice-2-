#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<int,int> &a, pair<int,int>&b)  {

    return a.first<b.first;
}
int main() 
{  
    int n,s;
    
    cin>>s>>n;
    int a,b;
    vector<pair<int,int>> vec;

    for (int i = 0; i < n; i++)
    {
        cin>>a>>b;
        vec.push_back({a,b});
    }
    sort(vec.begin(),vec.end(),cmp);
    n = vec.size();

    for (int i = 0; i < n; i++)
    {
        if(vec[i].first >=s){
            cout<<"NO"<<endl;return 0;
        }
        else{
            s+=vec[i].second;
        }
    }
    
    
    cout<<"YES";
    cout<<endl;
    return 0;
  }