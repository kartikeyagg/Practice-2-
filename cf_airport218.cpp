#include<bits/stdc++.h>
using namespace std;
  
int main() 
{  
    int n,m;
    cin>>n>>m; // n:- num of passengers 
    // m:- num of planes
    priority_queue<int, vector<int>, greater<int>> min1;
    vector<int> vec(m,0);
    priority_queue<int>  pq;
    for (int i = 0; i < m; i++)
    {
        cin>>vec[i];
        pq.push(vec[i]);
        min1.push(vec[i]);

    }
    int mn1=0,mx1 =0;
    int temp, n1;
    for (int i = 0; i < n; i++)
    {
        temp = pq.top();
        pq.pop();
        mx1+=temp;
        temp--;
        if(temp>0){
            pq.push(temp);
        }
        n1 = min1.top();
        min1.pop();
        mn1 += n1;
        n1--;
        if(n1>0){
            min1.push(n1);
        }

    }
    cout<<mx1<<" "<<mn1;
    

    cout<<endl;
    return 0;
  }