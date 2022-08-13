#include<bits/stdc++.h>
using namespace std;
void solve1(string &s){ 
    int n =s.size();
    string temp = "WUB";int j;int k;
    for (int i = 0; i < s.size(); i++)
    {   
        // cout<<"for i= "<<s[i]<<endl;
        if(s[i] == 'W'){
            j =0 ;k=i;
            while(i<s.size() && j<3){
                if(temp[j] == s[i]){

                    j++;i++;

                }
                else break;

            }
            if(j==3){
                if(k==0 || (k>0 && s[k-1]==' ')){
                    s = s.substr(0,k)+ s.substr(i,n-i);
                    i = k-1;
                }
                else{
                    s = s.substr(0,k)+" "+ s.substr(i,n-i);
                    // i--;
                    i=k;
                }
            }
            else{
                i=k;
            }

        }
    }
return ;
}

int main() 
{  
    string s;
    cin>>s;
    solve1(s);
    cout<<s;

    cout<<endl;
    return 0;
  }