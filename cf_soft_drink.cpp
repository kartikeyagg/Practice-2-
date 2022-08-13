#include<bits/stdc++.h>
using namespace std;

int solve(vector<int> &vec){

    int a,b,c;
    a = vec[1]*vec[2];
    b = vec[3]*vec[4];
    c = vec[5];
    a = a/vec[6];
    c = c/vec[7];

    return min(c,min(a,b))/vec[0];

}

int main() 
{  
    vector<int> vec;
    int k;
    for (int i = 0; i < 8; i++)
    {
        cin>>k;
        vec.push_back(k);
    }
    int res = solve(vec);
    cout<<res;
    
    
    cout<<endl;
    return 0;
  }