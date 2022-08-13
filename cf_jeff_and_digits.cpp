#include<bits/stdc++.h>
using namespace std;
  
int main() 
{  
    int n;
    cin>>n;
    int count5=0,count0=0;
    int a;
    for(int i=0;i<n;i++){

        cin>>a;
        if(a ==5) count5++;
        else count0++;
    }

    n = count5/9;

    if(n == 0 && count0==0){
        cout<<"-1"<<endl;return 0;
    }
    else if(n == 0 && count0>0){
        cout<<"0"<<endl;return 0;
    }
    else if( n>0 && count0==0){
        cout<<"-1"<<endl;return 0;
        
    }
    else{
        for (int i = 0; i < n*9; i++)
        {
            cout<<"5";
        }
        for (int i = 0; i < count0; i++)
        {
            cout<<"0";
        }

    }
    cout<<endl;
    return 0;
  }