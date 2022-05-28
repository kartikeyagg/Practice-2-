#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
  
int main() 
{   string a = "bbaa",B ="babaaaabbbbbabbaababbaaabbabaaaabaaaabbaabaabababaabbaabbaaaaababba" ;
    string A =a;
    if(B.empty() || A.empty()){
        return -1;
    }
    int n=A.size(),nb = B.size(),i,j;
    // A is needle
    // int *arr=  new int[n]();
    vector<int> arr(n,0);
    int p=1;
    i=1;
    while(i<n){

        if(A[i]==A[p-1]){
            arr[i] = p;
            p++;
        }
        else if(A[i] == A[0]){
            p=1;
            arr[i] = p;
            p++;


        }
        else{
            p=1;
        }

    i++; }  

    arr.insert(arr.begin(),0);

    i=0;j=0;
    int flag=0;
    cout<<"Value of n is"<<n<<endl;
    A.insert(A.begin(),'#');
//     A : "babaaaabbbbbabbaababbaaabbabaaaabaaaabbaabaabababaabbaabbaaaaababba"
// B : "bbaa"
    while(i<nb){

        if(B[i] ==A[j+1]  ){
            cout<<B[i]<<" ";
            cout<<"val of j is "<<j<<" i is"<<i<<endl;
            if(j==n-1){cout<<"got answer"<<endl;cout<<(i+1-n)<<endl;return i+1-n;flag=2;break;}
            i++;
            j++;
            
        }
        else{
            j = arr[j];
            if(j==0){
                if(!(B[i] ==A[j+1]  )){
                    i++;
                }

            }
            

        }

    }
    cout<<endl;

    
    
return -1;
    
    
    cout<<endl;
    return 0;
  }