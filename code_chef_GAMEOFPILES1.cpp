#include<bits/stdc++.h>
using namespace std;

bool solve(vector<int> &vec){

    // return 1 if chef wins // 0 if chefina
    int count= 0;
    int res=0;
    int mint = *min_element(vec.begin(),vec.end());
    if(mint == 1){
        return 1;
    }
    for(auto x: vec){
        
        count += x-2;

    }
    
    if(count%2 == 0){
        return 0;
    }
    else return 1;

}

int main() 
{  
    int k;
    cin>>k;
    int t;
    int n;
    // vector<int> vec;
    // set<int> st;
    vector<int> vec;

    for (int i = 0; i < k; i++)
    {
        cin>>n;
        vec.clear();
        for (int j = 0; j < n; j++)
        {   
            cin>>t;
            vec.push_back(t);
            
            
        }
        if(solve(vec)){
            cout<<"CHEF"<<endl;
        }
        else{
            cout<<"CHEFINA"<<endl;
        }
        
    }
    
    
    cout<<endl;
    return 0;
  }