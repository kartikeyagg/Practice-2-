#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int,int> &a,pair<int,int> &b){
    return a.first<b.first;
}

int main() 
{  
    int n;
    cin>>n;
    vector<pair<int,int>> vec(n);
    int a,b;
    for (int i = 0; i < n; i++)
    {
        cin>>vec[i].first>>vec[i].second;
    }
    sort(vec.begin(),vec.end(),cmp);
    int maxt = -1e8;
    for (int i = 0; i < n; i++)
    {
        if(vec[i].second > maxt){
            maxt = vec[i].second;
        }
        else{
            cout<<"Happy Alex"<<endl;
            return 0;
        }
    }
    cout<<"Poor Alex"<<endl;
    cout<<endl;
    return 0;
  }