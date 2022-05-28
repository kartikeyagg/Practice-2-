#include<bits/stdc++.h>
using namespace std;

int romantoint(string s){
    map<char,int> mp = {{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},
    {'D',500},{'M',1000}};
    int n = s.size();
    int j;
    int ans =0,temp =0;
    int prev = INT_MAX;
    for(int i =0;i<n;i++){

        temp = mp[s[i]];
        if(temp >prev){
            temp -=prev;
            ans += temp -prev;
        }
        else
        ans+= temp;
        prev = temp;

    }

return ans;

}
  
int main() 
{  
    string s = "IXCIV";
    s = "XIV";

    int res = romantoint(s);

    cout<<"\nres = "<<res<<endl;
    
    
    cout<<endl;
    return 0;
  }