#include <iostream>
#include <vector>
#include<map> //find the minimum positive integer not present in the array
using namespace std;
  
int main() 
{  
    vector<int> a={0,-9,1,3,-4,5};
    int maxi=-199;
    int sz =a.size();
    for (int i = 0; i <sz ; i++)
    {
        maxi = max(a[i],maxi);
    }
    if(maxi<0){
        cout<<1<<endl;
        return 0;
    }
    int arr[maxi] = {0};
    arr[0] = 1;
    for (int i = 0; i < sz; i++)
    {
        if(a[i]>0){

            arr[a[i]] +=1;
        }
    }
    for (int i = 0; i < maxi; i++)
    {
        if(arr[i]==0){
            cout<<"The minimum positive integer missing is "<<i<<endl;
            return 0;
        }
    }
    

    cout<<"the mininmum positive integer missing is "<<(maxi+1)<<endl;
    cout<<endl;
    return 0;
  }