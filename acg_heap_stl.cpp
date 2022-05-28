#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define pii pair<int,int>
#define vii vector<pii>
#define rep(i,a,b) for(int i=a;i<b;i++0)
#define ff first
#define ss second
#define setBits(x) builtin_popcount(x)

  
int main() 
{  
    priority_queue<int,vector<int>>pq; // max heap
    pq.push(2);
    pq.push(3);
    pq.push(1);
    cout<<"top is "<<pq.top()<<endl;
    pq.pop(); // pops the top element
    cout<<"top is "<<pq.top()<<endl;
    cout<<"for min heap"<<endl;
    priority_queue<int,vector<int>,greater<int>> pqm; // min heap
    pqm.push(2);
    pqm.push(1);
    pqm.push(-1);
    cout<<"top is "<<pqm.top()<<endl;
    pqm.pop(); // pops the top element
    cout<<"top is "<<pqm.top()<<endl;


    cout<<"for pairs;"<<endl;
    priority_queue<pii,vector<pii>> pqp;
    pqp.push(make_pair(1,4));
    pqp.push(make_pair(2,1));
    pqp.push(make_pair(3,-6));
    cout<<"top element is "<<pqp.top().first<<" "<<pqp.top().second<<endl;

    cout<<"for pairs with min heap"<<endl;
    priority_queue<pii,vector<pii>,greater<pii>> pqpm;
    pqpm.push(make_pair(1,-4));
    pqpm.push(make_pair(2,5));
    pqpm.push(make_pair(3,3));
    cout<<"top element is "<<pqpm.top().first<<" "<<pqpm.top().second<<endl;



    
    cout<<endl;
    return 0;
  }