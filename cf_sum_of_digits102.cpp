#include<bits/stdc++.h>
#include <unistd.h>
using namespace std;
#define ll long long  
int main() 
{  
    
    string n;
    cin>>n;
    int i=0;
    int t =0;
    while(n.size()>1){
        t=0;
        usleep(10000);

        // cout<<"n is "<<n<<endl;
        for (int j = 0; j < n.size(); j++)
        {
            t+=n[j]-'0';
        }
        
        // cout<<"t is"<<t<<endl;
        i++;
        n = to_string(t);
        
    }
    cout<<i<<endl;
    cout<<endl;
    return 0;
  }