#include <iostream>
#include <vector>
using namespace std;
int sqrt1(int A) {

    int high =A,low =0;
    int mid = (low+high)/2;
    int ans =0;

    while(low<=high){
        mid = (low+high)/2;

        if(mid*mid == A){
            return mid;
        }

        else if(mid*mid>A){
            high = mid-1;
        }

        else {
            low = mid+1;
            ans = mid;
        }
        
        
    }

    return ans;
}

  
int main() 
{   cout<<"max is "<<INT32_MAX<<endl;
    int a = 2147483647;
    int t = sqrt1(a);
    cout<<"the square root is "<<t<<endl;
    
    
    cout<<endl;
    return 0;
  }