#include<bits/stdc++.h>
using namespace std;

int solve(int n,int m){

    vector<int> vec;
    queue<int> q;
    int k,t;
    for (int i = 0; i < n; i++)
    {
        cin>>k;
        vec.push_back(k);
        q.push(i);
    }
    while(q.size()>1){

        k = q.front();
        q.pop();
        t= vec[k]-m;
        if(t>0){
            q.push(k);
            vec[k] = t;
        }

    }

    return (q.front()+1);
    
    

}
  
int main() 
{  
    int n,m;
    cin>>n>>m;
    cout<<solve(n,m);
    cout<<endl;
    return 0;
  }