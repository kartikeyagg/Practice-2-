#include <iostream>
#include <vector>
#include <string>
using namespace std;
  
int main() 
{  string A =  "  fsdf hey";
    int n=A.size(),i,j,flag =0;
    int spcend =0;
    for(i=n-1;i>=0;i--){
        if(A[i]==' ') spcend++;
        else{break;}
    }

    for(i=n-1-spcend;i>=0;i--){
        if(A[i]==' ' && i != n-1){
            flag=1;
            {cout<<(n-i-1-spcend)<<endl;return (n-i-1-spcend);}

            break;
        }

    }
    if(flag==0 ){
        // if(A[n-1]==' ')
        // {cout<<n-1<<endl;return n-1;}
        cout<<n-spcend<<endl;

        return n-spcend;
    }

    



cout<<0<<endl;
    
    
    cout<<endl;
    return 0;
  }