#include<bits/stdc++.h>
using namespace std;

int solve(vector<int> &vi){

    map<int,vector<int>> mp;
    int nowsum=0,maxsum =0;
    int n = vi.size();
    mp[0] = {-1,-1};
    int ans =-1;
    int tk =0;
    for (int i = 0; i < n; i++)
    {
        if(vi[i] == 1){
            nowsum++;
        }
        else{
            nowsum--;
        }

        // mp[i] = nowsum;

        if(mp.find(nowsum) == mp.end()){ // means not found
            mp[nowsum] = {i,i};
        }
        // else{
        //     // mp[nowsum].push_back(i);
        //     continue;

        //     // mp[nowsum][0] = min(mp[nowsum][0],i);
        //     // mp[nowsum][1] = max(mp[nowsum][1],i);
        // }
        tk = nowsum-1;
        if(mp.find(tk) != mp.end()){// found
            ans = max(ans, i-mp[tk][0]);
        }
        
    }
    cout<<"mp is \n";
    for(auto x: mp){

        cout<<x.first<<": ";
        for(auto y : x.second){
            cout<<y<<" ";
        }
        cout<<endl;

    }


    // for(auto x: mp){
        
    //     tk =0-x.first;
    //     if(mp.find(tk)!=mp.end()){//means found

    //     ans = max(ans,abs(x.second[0] - mp[tk][1] ));
    //     ans = max(ans,abs(x.second[1] - mp[tk][0] ));

    //     } 
    // }

return ans;

}
  
int main() 
{  
    
    vector<int> vec = {0, 1, 1, 0, 0, 1};

    int ans = solve(vec);

    cout<<"the answer is "<<ans<<endl;
    
    cout<<endl;
    return 0;
  }