#include<bits/stdc++.h>

using namespace std;

vector<int> solve(vector<int> &vi){

    int n  = vi.size();
    map<int,pair<int,int>>  mp;
    int sum1;

    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            sum1 = vi[i]+vi[j];
        }

        if(mp.find(sum1) == mp.end()){
            mp[sum1] = {make_pair(i,j)};
        }
        else{
            if(i != mp[sum1].first && i!=mp[sum1].second && j!=mp[sum1].first && j!=mp[sum1].second  ){

                return {mp[sum1].first,mp[sum1].first,i,j};

            }
        }
        
    }
    return {};
    
}

int main() 
{  
    vector<int> vi = {3, 4, 7, 1, 2, 9, 8};

    vi = solve(vi);

    for(auto x: vi){
        cout<<vi<<" ";
    }
    
    
    
    cout<<endl;
    return 0;
  }