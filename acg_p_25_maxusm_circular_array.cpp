#include <iostream>
#include <vector>
using namespace std;
//The program aims to find the subarray with max sum in given circular array
// Approach:- 
// res = sum of array - (sum of non contributing elements)
// to find the 2nd term use kadane algorithm to find a subarray with max - sum;
// can be found with reversing the sign of every element in array and applying kadane to fing max subarray;

int main() 
{   vector <int> a={4,-4,6,-6,10,-11,12};
    int sum=0,i,sum_no_contributing;
    for ( i = 0; i < a.size(); i++)
    {
        sum +=a[i];
        a[i] = -a[i]; //reversed the sign of each element
    }
    cout<<"total sum is "<<sum<<endl;
    // using kadane to find max subarrray 
    int maxsum = 0,currentsum =0;
    int count = a.size();
    for (  i = 0; i < count; i++)
    {
        currentsum+= a[i];

        if(currentsum<0){
            currentsum =0;
        }
        maxsum = max(maxsum,currentsum);
    }   
    // found the sum of max suarray (reverse signed)
    cout<<"The max sum in circular array is ";
    cout<<sum + maxsum;
    cout<<endl;
    return 0;
  }