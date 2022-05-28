#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> primefactors(int a){
    vector<int> v;
    // int arr[a+1] = {0};
    int* arr = new int[a+1]();
    for(int i=2;i*i<a+1;i++){
        if(arr[i]==0){
        for(int j=2*i;j<a+1;j+=i){{
            arr[j] =1;

            

        }}
        }
    }
    for (int i = 2; i < a+1; i++)
    {
        if(arr[i]==0){
            v.push_back(i);
        }
    }
    delete[] arr;
    
    

return v;

}

int main() 
{  int a;
    cout<<"Enter the number till to find prime nums "<<endl;
    cin>>a;
    int A =a;

    // vector<int> v = primefactors(a);

    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout<<v[i]<<" ";
    // }
    
    vector<int> t,v;
    vector<vector<int>> res;

    v = primefactors(A);
    int n = v.size();
    for (int i = 0; v[i] <= A/2 ; i++)
         {
             if(binary_search(v.begin(),v.end(),A-v[i])) {t.push_back(v[i]);t.push_back(A-v[i]);
             v.clear();
             cout<<"the answer is "<<t[0]<<" "<<t[1]<<endl;
             return 0;
              }
         }


         t.push_back(-1);
         cout<<"the answer is "<<t[0]<<" "<<t[1]<<endl;

    cout<<endl;
    return 0;
  }