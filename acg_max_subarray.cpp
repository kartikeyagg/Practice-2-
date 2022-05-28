#include <iostream>
#include <vector> 
using namespace std;
  //given an array find the subarray with max sum
int main() 
{
    vector<int> a = {4,-4,6,-6,10,-11,12};//{-1,4,-6,7,5,-4};//{1,-4,3,2,1};//{-1,4,7,2};
    int maxsum = 0,currentsum =0,i;
    int count = a.size();
    for (  i = 0; i < count; i++)
    {
        currentsum+= a[i];

        if(currentsum<0){
            currentsum =0;
        }
        maxsum = max(maxsum,currentsum);
    }        
    cout<<maxsum;
    cout<<endl;
    return 0;
  }