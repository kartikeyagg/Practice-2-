#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
  
int main() 
{  
    string A = "babb";
    int n = A.size();
    int olen = n;
    int n1 =0,flag=0,res=0;
    string B =A;
    reverse(B.begin(),B.end());
    A.push_back('#');
    A = A+B;
    n = (2*n)+1;
    int *arr=  new int[n]();
    int p=1;
    int i=1;
    flag=0;
    while(i<n){

        if(A[i]==A[p-1]){
            arr[i] = p;
            p++;
            flag =1;
        }
        else if(A[i] == A[0]){
            p=1;
            arr[i] = p;
            p++;


        }
        else{
            p=1;
            flag =0;
        }

    i++; }   

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    cout<<"the  ans is "<<olen -arr[n-1]<<endl;
    

    
    cout<<endl;
    return 0;
  }