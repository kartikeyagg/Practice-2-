#include<bits/stdc++.h>
using namespace std;

void solve(string &s, vector<int> &t){

    string temp;
    for (int i = 0; i < s.size(); i++)
    {
        if(s[i] == '.' && temp.size() ==0){
            t.push_back(0);
        }
        else if(s[i] == '.' && temp.size() ==1){
            t.push_back(1);
            temp.clear();
        }
        else if(s[i] == '-' && temp.size() == 0 ){
            temp+='-';
        }
        else if(s[i] == '-' && temp.size() == 1 ){
            t.push_back(2);
            temp.clear();
        }
    }
    return ;
    

}
  
int main() 
{  
    
    string s;
    cin>>s;
    vector<int> t= {};

    solve(s,t);
    for(auto x:t){
        cout<<x;
    }cout<<endl;
    
    cout<<endl;
    return 0;
  }