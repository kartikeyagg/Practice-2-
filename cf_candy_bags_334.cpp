#include<bits/stdc++.h>
using namespace std;
  
int main() 
{  
    int n;
    cin>>n;
    int k = n*n;
    int temp;
    vector<int> vec;
    for (int i = 1; i <=n/2; i++)
    {
        vec.push_back(i);
    }
    for (int i = 1; i <=n/2; i++)
    {
        vec.push_back(k);
        k--;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n/2; j++)
        {
            cout<<vec[j]<<" ";
            vec[j]+=n/2;
        }
        for (int j = n-1; j >= n/2; j--)
        {
            cout<<vec[j]<<" ";
            vec[j]-=n/2;
        }
        cout<<endl;

    }
    
    cout<<endl;
    return 0;
  }