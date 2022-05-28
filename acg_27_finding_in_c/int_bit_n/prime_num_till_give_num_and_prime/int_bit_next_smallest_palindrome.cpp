#include <iostream>
#include <vector>
#include <string>
using namespace std;
  
int main() 
{   string A;
    string B;
    int n = A.size();
    int count9 =0;
    for (int i = 0; i < A.size(); i++)
    {   

        if(A[i] == 9){
            count9++;
        }
     
    }
    if(count9 == A.size()){
        for (int i = 0; i < A.size(); i++)
        {
            if(i==0){
                B.push_back(1);
            }
            else{
                B.push_back(0);
            }
        }
        
            B.push_back(1);
            cout<<B<<endl;
            return 0;
    }
    for (int i = 0; i < A.size(); i++)
        {
            
        }

     
    
    cout<<endl;
    return 0;
  }