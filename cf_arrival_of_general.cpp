#include<bits/stdc++.h>
using namespace std;

int solve(int n, vector<int> &vec){

    int mn = *min_element(vec.begin(),vec.end());
    int mx = *max_element(vec.begin(),vec.end());
    int mini,maxi;
    for(int i =0;i<n;i++){
        if(vec[i] == mn){
            mini = i;
            // break;
        }
    }
    for(int i =0;i<n;i++){
        if(vec[i] == mx){
            maxi = i;
            break;
        }
    }
    // int flag = 0;
    if(maxi > mini){
        return maxi + (n-1)-mini-1;}
    
    return maxi + (n-1)-mini;


}
  
int main() 
{  
    int n;
    cin>>n;
    vector<int> vec(n,0);
    for (int i = 0; i < n; i++)
    {
        // vec.push_back()
        cin>>vec[i];
    }
    cout<<solve(n,vec)<<endl;
    
    
    cout<<endl;
    return 0;
  }