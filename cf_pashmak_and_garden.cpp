#include<bits/stdc++.h>
using namespace std;
  
int main() 
{  
    int x1,x2,y1,y2;
    
    cin>>x1>>y1;
    cin>>x2>>y2;
    int t;
    if(x1==x2){
        t = abs(y1-y2);
        cout<<t+x1<<" "<<y1<<" "<<t+x2<<" "<<y2<<endl;

    }
    else if (y1 == y2){
        t = abs(x1 - x2);
        cout<<x1<<" "<<y1+t<<" "<<x2<<" "<<y2+t<<endl;
    }
    else{
        t = abs(x1-x2);
        int t2 = abs(y1-y2);
        if(t!=t2){
            cout<<"-1"<<endl;
            return 0;
        }
        cout<<x1<<" "<<y2<<" "<<x2<<" "<<y1<<endl;
    }
    cout<<endl;
    return 0;
  }