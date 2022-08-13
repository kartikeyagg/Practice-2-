#include<bits/stdc++.h>
using namespace std;
  
int main() 
{  
    int n;
    cin>>n;
    vector<int> vec;
    // vec.push_back(INT_MAX);
  
    int inp;
    for (int i = 0; i < n; i++)
    {
        cin>>inp;
        vec.push_back(inp);
    }
    if(n == 1){
        cout<<"yes"<<endl;
        cout<<"1 1"<<endl;
        return 0;
    }
    // vec.push_back(-1);
    int l=0,r=0,j;
    int flag =0;
    for (int i = 1; i < n; i++)
    {
        if(vec[i]<vec[i-1]){
            if(flag ==1){
                cout<<"no"<<endl;
                return 0;
            }
            l = i-1;
            flag =1;
            j=i;
            while(j<n && vec[j]<vec[j-1]){
                j++;
            }
            r = j-1;
            i =j-1;

            if(l>0 && vec[r] < vec[l-1]){
                cout<<"no"<<endl;
                return 0;
            }
            if(r<n-1 && vec[l]>vec[r+1] ){
                cout<<"no"<<endl;
                return 0;
            }
        }
    }
   
    cout<<"yes"<<endl;
    cout<<l+1<<" "<<r+1<<endl;
    // cout<<endl;
    return 0;
  }