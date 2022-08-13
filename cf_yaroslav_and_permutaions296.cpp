#include<bits/stdc++.h>
using namespace std;
// apply moore voting algorithm  
int main() 
{   
    int n;
    cin>>n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++)
    {
        cin>>vec[i];
    }
    if(n == 1){cout<<"YES\n";return 0;}
    int j=0;
    int count =0;
    int ele  =-1;
    while(j<n){
        if(vec[j] == ele){
            count++;
        }
        else if(count == 0) {
            ele = vec[j];
            count =1;
        }
        else {
            count--;
        }
        j++;
    }
    
    count = 0;
    for (int i = 0; i < n; i++)
    {
        if(vec[i] == ele){
            count++;
        }
    }
    if(n%2 == 1) n++;
    if(count>(n)/2) cout<<"NO";
    else cout<<"YES";
    
    cout<<endl;
    return 0;
  }