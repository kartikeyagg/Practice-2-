#include<bits/stdc++.h>
using namespace std;

vector<string> res;

void gen1(int o1,int c1,int n,string s){

    if(o1 == n && c1 ==n){
        res.push_back(s);
    }

    if(o1 ==n){

        while(c1 < n){
            s+=')';
            c1++;
        }
        res.push_back(s);
    }
    else{
        s+='(';
        gen1(o1+1,c1,n,s);
        s.pop_back();
        if(o1>c1){
            s+=')';
            gen1(o1,c1+1,n,s);
            s.pop_back();
        }
    }

    return ;


}

int main() 
{  
    res.clear();

    gen1(0,0,3,"");

    for(auto x: res){
        cout<<x<<endl;
    }
    
    
    cout<<endl;
    return 0;
  }