#include<bits/stdc++.h>
using namespace std;

int solve(int n){

    // vector<int> vec;
    int k;
    int count =0;
    for (int i = 0; i < n; i++)
    {
        cin>>k;
        count+= k;
    }
    int res=0;
    k = count;
    k = k%(n+1); //yhan pe zero bhi  toh aa skta hai
    // zero ka matlab previous to dima
    for (int i = 0; i < 5; i++)
    {
        if((k +i+1)%(n+1)!=1 ){
            res++;
        }
    }
    return res;

}

int main() 
{  
    int n;
    cin>>n;

    cout<<solve(n);
    
    cout<<endl;
    return 0;
  }