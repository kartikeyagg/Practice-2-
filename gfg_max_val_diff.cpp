#include<bits/stdc++.h>
using namespace std;

int mac_val(vector<int> &a,int n){
    
    vector<int> b,c,d,e;

    for(int i =0;i<n;i++){

        b.push_back(a[i]-i);
        c.push_back(a[i]+i);}
        sort(b.begin(),b.end());
        sort(c.begin(),c.end());
        d = {abs(c[c.size()-1]-c[0]),abs(b[b.size()-1]-b[0])};

        return *max_element(d.begin(),d.end());


}


int main() 
{  
    vector<int> a  = {1,1,1};
    int n = a.size();
    int res = mac_val(a,n);
    cout<<"The result is "<<res<<endl;

    
    cout<<endl;
    return 0;
  }