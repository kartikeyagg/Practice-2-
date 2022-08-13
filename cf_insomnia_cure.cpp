#include<bits/stdc++.h>
using namespace std;
  
int main() 
{  
    int k,l,d;
    vector<int> arr(4,0);
    // cin>>k>>l>>m>>n>>d;
    for (int i = 0; i < 4; i++)
    {
        cin>>arr[i];
    }
    cin>>d;
    
    vector<int> vec(d+1,0);

    for (int i = 0; i < 4; i++)
    {
        k = arr[i];
        l =1;
        while(k*l < d+1){

            vec[k*l] = 1;
            l++;

        }
    }
    int sum1 =0;
    for(auto x: vec){
        sum1+=x;
    }
    
    cout<<sum1<<endl;
    
    cout<<endl;
    return 0;
  }