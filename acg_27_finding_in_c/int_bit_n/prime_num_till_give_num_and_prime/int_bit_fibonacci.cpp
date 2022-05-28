#include <iostream>
#include <vector>
using namespace std;
  
int main() 
{   int A =50;
    double long *arr = new double long[A]();
    arr[0]=1;
    arr[1] =1;
    for(int i=2;i<A;i++){
        arr[i] = arr[i-2]+arr[i-1];
    }
    // return arr[A-1];
    cout<<arr[A-1];

    
    
    cout<<endl;
    return 0;
  }