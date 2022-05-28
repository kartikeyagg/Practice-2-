
#include<bits/stdc++.h>
using namespace std;

#define vvi vector<vector<int>>

#define v1 vector<int> 

int LCS1(int i,int j , string &A, string &B , vvi &mem){

    if(mem[i][j]!=-1){
        return mem[i][j];
    }

    if(A[i] =='\0' || B[j] == '\0'){
        mem[i][j]  =0;
        return 0;
    }
    int tk;
    if( A[i] == B[j]){
        tk = 1+ LCS1(i+1,j+1,A,B,mem);
        mem[i][j]= tk;
        return (tk);
    }
    tk = max(LCS1(i+1,j,A,B,mem),LCS1(i,j+1,A,B,mem));
    mem[i][j] = tk;
    return tk;
} 

  
int main() 
{  
    string a = "fasdfda";
    string b = "fasfdasf";

    vvi mem (a.size()+1,v1 (b.size()+1,-1));

    int res = LCS1(0,0,a,b,mem);

    cout<<"\n result is "<<res<<endl;

    
    cout<<endl;
    return 0;
  }


// if(a[a.size()] == '\0'){
//     cout<<"hellow \n";
// }

// cout<<a[a.size()]<<endl;
