#include<bits/stdc++.h>
using namespace std;
int MissingNumber(vector<int>& array, int n) {
        // Your code goes here.
        sort(array.begin(),array.end());
        for(int i=0;i<n-1;i++){
            
            if(array[i]!=i+1){
                return i+1;
            }
            
        }
        return n;
    }
int main() 
{  
    vector<int> array = {1,2,3,4,5};
    int n = array.size()+1;
    int t = MissingNumber(array,n);
    cout<<"Answer is "<<t<<endl;

    
    cout<<endl;
    return 0;
  }