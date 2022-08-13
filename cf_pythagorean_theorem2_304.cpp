#include<bits/stdc++.h>
using namespace std;
  
int main() 
{  
    double n;
    cin>>n;
    double c =5.2324243;
    // cout<<sqrt(c)<<endl;return 0;
    // cout<<sqrtf128(c)<<endl;return 0;
    // cout<<int(n)%2;
    int count =0;
    for (double i =1; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            c = sqrt(i*i + j*j);

            if(c>n){
                break;
            }
            if(c == int(c)){
                count++;
            }
            
        }
        
    }
    cout<<count;
    
    cout<<endl;
    return 0;
  }