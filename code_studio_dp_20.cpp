#include<bits/stdc++.h>
using namespace std;

// int rec1()

int minimumElements(vector<int> &num, int x)
{
    // Write your code here.
    vector<int> tab(x+3,1e7);
    int n = num.size();
    tab[0] = 0;
    int tk =0;
    for(int i =0;i<x+3;i++){
            if(tab[i] == 1e7) continue;
        
//         if(i == x){
//             return tab[x];
//         }
        
        for(int j = 0;j<n;j++){
            
            tk = i+ num[j];
            if(tk < x+3){
                tab[tk] = min(tab[tk],tab[i]+1);
            }
            
        }
        
    }
    if(tab[x] == 1e7){
        return -1;
    }
    return tab[x];
    
}
  
int main() 
{  
    vector<int> arr = {1,2,3};
    int tar = 7;

    int res = minimumElements(arr,tar);

    cout<<"the result  is "<<res<<endl;
    
    cout<<endl;
    return 0;
  }
  