#include<bits/stdc++.h>
using namespace std;
  
int main() 
{  
    float n;
    cin>>n;
    float k,f,sum;
    for (int i = 0; i < n; i++)
    {
        cin>>k;
        f= k/100;
        sum+=f;
    }
    cout<<fixed<<setprecision(5)<<100*sum/n<<endl;
    
    cout<<endl;
    return 0;
  }