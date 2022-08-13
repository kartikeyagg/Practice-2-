#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int,int> &a,pair<int,int> &b){

    if(a.first == b.first){
        return a.second<b.second;
    }
    return a.first<b.first;

}

void solve(){
    int n;
    cin>>n;
    int inp;
    vector<pair<int,int>> vec;
    for (int i = 0; i < n; i++)
    {
        cin>>inp;
        vec.push_back({inp,i+1});
    }
    sort(vec.begin(),vec.end(),cmp);
    vector<int> arr(n,1);
    int ind;
    vector<int> ans(n+1,0);
    for (int i = 0; i < n; i++)
    {   
        // ans[i] = max(ans[i],arr[i]);
        ans[vec[i].first] = max(ans[vec[i].first],arr[i]);
        ind  = i+1;
        while(ind <n && vec[i].first == vec[ind].first){

            if((vec[ind].second-vec[i].second)%2 ==1 ){
                
                arr[ind] = max(arr[ind],arr[i]+1);
                break;
            }
            ind++;
        }
    }
    // cout<<"answer is \n";

    for (int i = 1; i <= n; i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    return ;
    

}
  
int main() 
{  
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        solve();
    }
    
    cout<<endl;
    return 0;
  }