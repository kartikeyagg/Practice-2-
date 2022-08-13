
#include<bits/stdc++.h>
using namespace std;
int solve(vector<int> &v,int n){

    int k;
    int count =0;
    for (int i = 0; i <n ; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin>>k;
            v[i]+=k;
        }
        if(v[i]>=2) count++;
    }
    
return count;
}
  
int main() 
{  
    int n;
    cin>>n;
    vector<int> vec(n,0);
    int res = solve(vec,n);
    cout<<res;
    cout<<endl;
    return 0;
  }