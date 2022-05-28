#include <iostream>
#include <vector>
using namespace std;
int find_x(vector<int> a){
  int n = a.size();
  int low =0,high =n-1;
  int mid,le  = a[n-1];

  while(low<=high){
    mid = (low+high)/2;
    cout<<"mid is "<<a[mid]<<endl;

    if(mid != n-1 && a[mid]>a[mid+1]){return mid;}

    // we can compare now with last element of the array

    else{
      if(a[mid]>le){

        low = mid+1;


      }
      else{
        high = mid-1;
      }

    }



  }
  return 0;

}
  
int main() 
{  
  vector<int> a = {5,6,7,1,2,3,4};

  int t = find_x(a);
  cout<<" the num  of rotation is "<<t<<endl;
    cout<<endl;
    return 0;
  }