#include<bits/stdc++.h>
using namespace std;
  
int main() 
{  
    int k;
    cin>>k;
    vector<int> vec(12);
    for(int i=0;i<12;i++){
        cin>>vec[i];
    }
    sort(vec.begin(),vec.end());
    int j =11;
    while(j>=0 && k>0){

        k-= vec[j];
        j--;

    }
    if(k<=0){cout<<11-j<<endl;}
    else cout<<"-1"<<endl;
    cout<<endl;
    return 0;
  }