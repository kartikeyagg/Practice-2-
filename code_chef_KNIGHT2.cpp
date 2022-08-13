#include<bits/stdc++.h>
using namespace std;

void knight100(vector<int> &vec){

    int t = abs(vec[0]-vec[2])+ abs(vec[1]-vec[3]);
    if(t%2 == 1){
        cout<<"NO"<<endl;
        return ;
    }
    cout<<"YES"<<endl;

}

int main() 
{  
    int k;
    vector<int> vec(4,0);
    cin>>k;
    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin>>vec[j];
        }
        knight100(vec);
        
    }
    
    
    cout<<endl;
    return 0;
  }