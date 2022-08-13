#include<bits/stdc++.h>
using namespace std;

bool solve(int n,int m){

    vector<int> vec (m+2,0);

    for (int i = 2; i < m+2; i++)
    {   
        if(vec[i] == 1){continue;}
        int t=i*2;
        while(t<m+2){
            vec[t] = 1;
            t+=i;
        }
    }
    int k=0;
    for(int i= n+1;i<=m+1;i++){
        if(vec[i] == 0){
            k = i;
            break;
        }
    }
    if(k == m){
        return 1;
    }
    return 0;
}
  
int main() 
{  
    int n,m;
    cin>>n>>m;
    if(solve(n,m)) cout<<"YES";
    else cout<<"NO";
    cout<<endl;
    return 0;
  }