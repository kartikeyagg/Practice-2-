#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
  
int main() 
{   string A ="1a3";
    int n = A.size();
    if(n==0){cout<<1<<endl;return 1;}
    for(int i=0;i<n;i++){
        if(A[i]>=65 && A[i]<=90){
            A[i] = A[i] +32;
        }
        if(!(A[i]>=97 && A[i]<=122) && !(A[i]>=48 && A[i]<=57)){
            A.erase(A.begin()+i);
            i--;
            n--;
        }

    }
    cout<<" main string is "<<A<<endl;
    for(int i=0;i<n/2;i++){

        if(A[i] != A[n-1-i]){
            cout<<0<<endl;
            return 0;
        }

    }
cout<<1<<endl;
return 1;
    
    
    cout<<endl;
    return 0;
  }