#include <iostream>
#include <vector>
using namespace std;
  
int main() 
{    vector<int> A = {9,9};
        int n = A.size(), j,t;int n1=n-1;

    while(n1>=0){
      t=  A[n1]+1;
      cout<<"t is "<<t<<endl;

      if(t==10 && n1!=0){
          A[n1] =0 ;
          cout<<"in if"<<endl;
      }
      else{
          A[n1] = t;
          break;
      }
      n1--;
    }
    
    cout<<endl;
    return 0;
  }