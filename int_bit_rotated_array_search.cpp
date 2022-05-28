#include <iostream>
#include <vector>
using namespace std;
#include <valarray>
int b_search1(vector<int> a,int s,int e,int b,int flag){

    vector<int> t ;
    for(int i=s;i<=e;i++){
        t.push_back(a[i]);
    }
    a.clear();
    a =t;
    t.clear();

    int n = a.size();
    int low =0,high = n-1;
    int mid = (low+high)/2;
    int count=0;
    // if(a[high]<b || a[low] > b){
    //     return -1;
    // }
    while (low<=high)
    {   
        mid = (high+low)/2;
        if(a[mid] == b){

            if(flag ==1){
                return mid+s;
            }

            return mid; 
 
            
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

int find_x(vector<int> a){
  int n = a.size();
  int low =0,high =n-1;
  int mid,le  = a[n-1];

  while(low<=high){
    mid = (low+high)/2;

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
  


int search1(const vector<int> &A, int B) {

    int n = A.size(),i,j,res =0;

    i = find_x(A);
    cout<<" the index is "<<i<<endl;

    // vector<int> :: iterator x;
    // x = A.begin();
    // vector<int> :: iterator y;
    // y = A.begin()+1+i;

    

    res =b_search1(A,0,i,B,0);
    if(res == -1){
        res = b_search1(A,i+1,n-1,B,1);
    }

return res;


}

  
int main() 
{  vector<int> a  ={180, 181, 182, 183, 184, 187, 188, 189, 191, 192, 193, 194, 195, 196, 201, 202, 203, 204, 3, 4, 5, 6, 7, 8, 9, 10, 14, 16, 17, 18, 19, 23, 26, 27, 28, 29, 32, 33, 36, 37, 38, 39, 41, 42, 43, 45, 48, 51, 52, 53, 54, 56, 62, 63, 64, 67, 69, 72, 73, 75, 77, 78, 79, 83, 85, 87, 90, 91, 92, 93, 96, 98, 99, 101, 102, 104, 105, 106, 107, 108, 109, 111, 113, 115, 116, 118, 119, 120, 122, 123, 124, 126, 127, 129, 130, 135, 137, 138, 139, 143, 144, 145, 147, 149, 152, 155, 156, 160, 162, 163, 164, 166, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177 };

    int t =search1(a,42);
    cout<<"ans is : "<<t<<endl;
    
    
    cout<<endl;
    return 0;
  }