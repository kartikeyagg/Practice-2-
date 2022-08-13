#include<bits/stdc++.h>
using namespace std;
  
int main() 
{  
    string s;
    cin>>s;
    int n = s.size();
    string temp;
    for(int i=0;i<n;i++){

        if(!(s[i] == '1' || s[i]=='4')) {cout<<"NO\n";return 0;} 
        if(s[i] == '1'){
            temp = "1";
        }
        else if(s[i] == '4'){

            if(temp.size()>2 || temp.empty()){cout<<"NO\n";return 0;} 
            else {
                temp+='4';
            }

        }

    }
    cout<<"YES";
    cout<<endl;
    return 0;
  }