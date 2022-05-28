#include<bits/stdc++.h>
using namespace std;


string rmv_consecutive_char(string A , int B){
    A = A+"%";
    int n = A.size();
    int count1 =1;
    for(int i=1;i<A.size();i++){
        if(A[i]!=A[i-1]){
            if(count1 == B){
                //delete here

                A = A.substr(0,i-B)+A.substr(i,A.size()-i);
                i = i-B;
            }
            count1 =1;
        }
        else{
            count1++;
        }

    }

A = A.substr(0,A.size()-1);

    
return A;
    

}
  
int main() 
{  
    // string s  = "fdaskjfaa";

    // s = s.substr(0,2)+s.substr(6,3);

    // cout<<"string is "<<s<<endl;
    
    // cout<<endl;
    return 0;

}