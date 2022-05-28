#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
  
int main() 
{   vector<int> v= {2,4,7,11,14,16,20,21,32,52};
    int s = 31;
    sort(v.begin(), v.end());
    int max_index = v.size()-1;
    for (int i = 0; i < v.size(); i++)
    {
        if(v[i]>s){
            max_index = i;
            break;
        }
    }
    int init_index = 0,sum=0;
    cout<<"max index is "<<max_index<<endl;
    for (int i = max_index; i >0; i--)

    {    sum =0;
         while(sum<s){
             sum = v[i]+v[init_index];
             cout<<"sum is "<<sum<<endl;
             if(sum==s){
                 cout<<"The pair is "<<v[i]<<" "<<v[init_index]<<endl;
                //  break;
                 return 0;
             }
             init_index++;
    }
    init_index=max(--init_index,0);

    }
    
    

    cout<<endl;
    return 0;
  }