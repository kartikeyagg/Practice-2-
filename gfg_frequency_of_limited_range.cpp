#include<bits/stdc++.h>
using namespace std;
void frequencyCount(vector<int>& arr,int n, int p)
    {   // n is the size
        // p is the max element
        // code here
        int i=0,j=0,temp;
        while(i<n){
            if(arr[i]<=0){
                i++;
                continue;
            }
            if(arr[arr[i]-1]<=0){
                arr[arr[i]-1] -=arr[i];
                arr[i] = 0;

                
            }
            else{
                temp = arr[i];
                arr[i] = arr[arr[i]-1];
                arr[temp-1] = -temp;
                
            }
            cout<<"the value of arr["<<i<<"] is now "<<arr[i]<<endl;
            for (int i = 0; i < n; i++)
            {
                cout<<arr[i];
                cout<<" ";

            }
            cout<<endl;
            
            if(arr[i]==0){
                i++;
            }
        }
        
    }
  
int main() 
{  
    vector<int> v = {2,3,2,3,5};
    int n = v.size();
    int p  =5;
    frequencyCount(v,n,p);
    cout<<"the result is "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<v[i];
        cout<<" ";
    }
    cout<<endl;
    

    
    cout<<endl;
    return 0;
  }