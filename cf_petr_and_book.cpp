#include<bits/stdc++.h>
using namespace std;
  
int main() 
{  
    int n;
    int sum1 =0;
    cin>>n;
    vector<int> vec(7,0);
    for (int i = 0; i < 7; i++)
    {
        cin>>vec[i];
        sum1+=vec[i];
    }
    int kt = n/sum1;
    int nt = n%sum1;
    if (kt>=1) n = sum1+nt;
    else n = nt;
    int ind=0;
    while(n>0){
        n-=vec[ind];
        ind = (ind+1)%7;
    }
    if(ind==0){
        cout<<7<<endl;return 0;
    }

    cout<<ind<<endl;

    
    cout<<endl;
    return 0;
  }