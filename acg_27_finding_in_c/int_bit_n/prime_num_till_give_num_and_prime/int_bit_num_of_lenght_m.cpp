#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
  
int main() 
{   cout<<endl;
    vector<int> A = {0,1,2,5},c;
    int B = 1, C = 123,count =0,b,t=0,res=0,xc=0;
    while (C>0)
    {
        c.push_back(C%10);
        C = C/10;
    }
    int nc= c.size();
    // reverse(c.begin(),c.end());
    b=B;
    int is0 =0,flag=0;
    if(A[0]==0){
        is0 =1;
    }
    int i,j,n=A.size();
    while(b>-1){
        if(b==B && B!=1){t=1;}
        else{t=0;}
        count =0;
        for (int i = 0; i < n; i++)
        {
            if(A[i]>=c[nc-1]){
                count = i;flag =1;
                break;
            }
        }
        if (flag ==0){
            count = A.size();
        }   
        cout<<"count 1 is "<<count<<endl;     
        if(is0 == 1 && (b==B && B!=1)){
            count--;
        }
        xc = count;
        
        cout<<"count 2 is "<<count<<endl;
        for (int j = 0; j < b-1; j++)
        {
            xc*=(n-j);
            
        }
        res+=xc;
        
        b--;
        nc--;

    }
    cout<<"result is "<<res<<endl;  
    
    
    cout<<endl;
    return 0;
  }