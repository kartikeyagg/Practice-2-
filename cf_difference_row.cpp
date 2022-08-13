#include<bits/stdc++.h>
using namespace std;
  
int main() 
{  
    int n;
    cin>>n;
    vector<int> vec(n);

    for (int i = 0; i < n; i++)
    {
        cin>>vec[i];
    }
    sort(vec.begin(),vec.end());

    cout<<vec[n-1]<<" ";
    for (int i = 1; i < n-1; i++)
    {
        cout<<vec[i]<<" ";
    }
    cout<<vec[0];
    cout<<endl;

    cout<<endl;
    return 0;
  }