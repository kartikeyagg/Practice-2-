#include <iostream>
#include <vector>
#include <string>
using namespace std;
  
int main() 


{   string A = "ABCD";
// {   string A = "PAYPALISHIRING";
    int B = 2;
    vector<string> v;
    string s ="";
    int flag=0;

    

    int n= A.size(),i,j,b=B;
    for(i=0;i<B;i++){
        v.push_back(s);
    }

    for(i=0;i<n;i+=0){
        b=B;
        while(i<n){
            v[B-b].push_back(A[i]);
            // b--;
            // if(b)
            if(b==B){flag =0;}
            else if(b==1){flag =1;}
            if(flag%2 ==0){
              b--;
            }
            else if(flag%2 != 0){
              b++;
            }
            i++;
        }


    }
    s.clear();
    for(i=0;i<v.size();i+=1){
        cout<<v[i]<<endl;
        for(j=0;j<v[i].size();j++){

            s.push_back(v[i][j]);

        }



    }
    // return s;
    cout<<s;
    
    
    cout<<endl;
    return 0;
  }