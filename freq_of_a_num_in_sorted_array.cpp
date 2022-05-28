#include <iostream>
#include <vector>
using namespace std;
int frequency1(vector<int> a,int b){

    int n = a.size();
    int low =0,high = n-1;
    int mid = (low+high)/2;
    int count=0;
    // if(a[high]<b || a[low] > b){
    //     return -1;
    // }
    while (low<=high)
    {   cout<<"In loop"<<endl;
        mid = (high+low)/2;
        if(a[mid] == b){ 
            while (a[mid] == b)
            {
                mid++;
            }
            while(mid>0 && a[mid-1] == b){
                mid--;
                count++;
            }

            return count;
            
        }
        else if(a[mid]>b){
            high = mid-1;
        }
        else {
            low = mid+1;
        }
    }
    
return -1;
}
  
int main() 
{  

    vector<int> a = {1,2,3,4,4,6,7};
    int t= frequency1(a,4);
    cout<<"the freq is "<<t;

    cout<<endl;
    return 0;
  }