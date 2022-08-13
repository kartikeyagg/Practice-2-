#include<bits/stdc++.h>
using namespace std;
  
int main() 
{  
    int n;
    cin>>n;
    vector<int> vec(n,0);
    for (int i = 0; i < n; i++)
    {
        cin>>vec[i];
    }
    sort(vec.begin(),vec.end());
    int a=0,b=0,c=0;
    for(auto x:vec){
        if(x<0){
            a++;
        }
        else if(x==0){b++;}
        else c++;
    }
    vector<int> q,e,w;
    int j =0;
    while(j<n){
        if(a%2 ==1 && q.empty()){
        q.push_back(vec[j]);
        }
        else if(a%2 == 0 && q.empty()){
            q.push_back(vec[j]);
            e.push_back(vec[j+1]);
            j++;
        }
        else if(vec[j] == 0){
            e.push_back(vec[j]);
        }
        else{w.push_back(vec[j]);}
    j++;
    }
    cout<<q.size()<<" ";
    for(auto x:q){
        cout<<x<<" ";
    }
    cout<<endl;
    cout<<w.size()<<" ";
    for(auto x:w){
        cout<<x<<" ";
    }
    cout<<endl;

    cout<<e.size()<<" ";
    for(auto x:e){
        cout<<x<<" ";
    }
    cout<<endl;

    cout<<endl;
    return 0;
  }