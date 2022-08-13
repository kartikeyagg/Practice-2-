#include<bits/stdc++.h>
using namespace std;

int max_move(vector<int> & vec){
    int count = 0;
    for(auto x: vec){
        if(x == 1) count++;
    }
    if(count ==0) return 0;
    if(count <=3) return 1;
    return 2;

}

  
int main() 
{  
    vector<int> vec(4,0);
    int  k;
    cin>>k;
    for (int j = 0; j < k; j++)
    {
    
        for (int i = 0; i < 4; i++)
        {
            cin>>vec[i];
        }

        cout<<max_move(vec)<<endl;
    
    }
    
    // cout<<endl;
    return 0;
  }