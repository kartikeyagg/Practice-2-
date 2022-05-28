#include<bits/stdc++.h>
using namespace std;


string addstr(string &a, string &b){

    int na = a.size(), nb = b.size();
    int i = na-1,j = nb-1;
    int ai,bj;
    int tk,carry=0;
    string ans = "";

    while(i>=0 || j>=0){

        if(i<0){ai = '0';}
        else ai = a[i];
        if(j<0){bj = '0';}
        else bj =b[j];

        tk = (ai -'0') + (bj -'0')+carry;

        carry = tk/10;

        ans = to_string(tk%10)+ans;
        i--;
        j--;

        
    }
    if(carry!=0){
        ans  =to_string(carry)+ans;
    }
    return ans;


}

string multiply1(string A,char b){

    string ans ="";
    int tk,carry =0;
    for(int i =A.size()-1;i>=0;i--){

        tk = ((A[i]-'0') * (b-'0'))+carry;
        carry  = tk/10;
        ans = to_string(tk%10)+ans;


    }
    if(carry!=0){
        ans  =to_string(carry)+ans;
    }
    return ans;


}

string multiply(string A, string B) {

    if(A=="0" || B=="0"){return "0";}

    vector<string> vi;
    int j=0;

    for(int i = B.size()-1;i>=0;i--){
        
        vi.push_back(multiply1(A,B[i]));

        for(int k=0;k<j;k++){
            vi[vi.size()-1] +="0";
        }
        j++;

    }

    string ans = "0";

    for(auto x: vi){

      ans = addstr(x,ans)  ;

    }

return ans;

}

  
int main() 
{  
    string A ="125",B= "0";
    char d = '4';

    // A = addstr(A,B);
    // cout<<A<<endl;

    A = multiply(A,B);
    cout<<A<<endl;
    
    
    cout<<endl;
    return 0;
  }