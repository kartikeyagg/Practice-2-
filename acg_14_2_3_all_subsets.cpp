#include <iostream>
#include <vector>
using namespace std;
// the prog aims to print all the subset of the given array
void subsets(vector<int> a){
    int n = a.size();

    for (int i = 0; i < (1<<n); i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(i & (1<<j)){
                cout<<a[j]<<" ";
            }
            
        }
        cout<<endl;
        
    }
}
int main() 
{  vector<int> a= {1,2,3};

    subsets(a);
    
    
    cout<<endl;
    return 0;
  }
//   op:- 
//   1 
// 2 
// 1 2 
// 3 
// 1 3 
// 2 3 
// 1 2 3 