#include<bits/stdc++.h>
using namespace std;
  
int main() 
{  
    int n;
    cin>>n;
    float x,y,z;
    for (int i = 0; i < n; i++)
    {
        cin>>x;
        y = (180/x);
        // z = (2*y)/(y-1);
        z = (360)/(180-x);

        if((z-int(z)<0.01 || int(z+1) - z<0.01) && y>1){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
    
    cout<<endl;
    return 0;
  }