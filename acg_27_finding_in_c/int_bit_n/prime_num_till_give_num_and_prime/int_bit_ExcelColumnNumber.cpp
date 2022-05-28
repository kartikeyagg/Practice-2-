#include <iostream>
#include <vector>
#include <string>
using namespace std;
  
int main() 
{   
    string A = "BA";
    int n = A.size(),t,x=0;
    char c;

    for(int i=0;i<n;i++){

        cout<<" for "<<A[i]<<endl;
        x*=26;

        c = A[i]-16;
        t= c-48;
        x+= t;
        
    }

    // return x;
    cout<<x;
    


    cout<<endl;
    return 0;
  }