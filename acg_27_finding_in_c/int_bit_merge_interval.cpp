#include <iostream>
#include <vector>
#include <utility>
using namespace std;
vector<pair<int,int>> merge2(vector<pair<int,int>> &intervals) {

    int n=intervals.size(),st,nt,j;
    int arr_size = (intervals[(n-1)][1]) + 1;
    int arr[arr_size] = {0};
    for(int i=0;i<n;i++){

        st = intervals[i][0];
        nt = intervals[i][1];
        for(j=st;j<=nt;j++){

            arr[j] =1;
        }


    }
    Interval t;
    vector<Interval> res;
    
    int k ,m,g=intervals[0][0];
    t[0] = g;n = intervals.size();
       for(int i=0;i<n;i++){

        st = intervals[i][0];
        nt = intervals[i][1];

        if(arr[nt]==0){
            t[1] =  nt;
            res.push_back(t);
            if(i+1<n){
            t[0]  = intervals[i+1][0];}
        }

   
        
        }


return res;


}

int main() 
{  
     int arr[9] = {0};
     for (int i = 0; i < 9; i++)
     {
         cout<<arr[i]<<" ";
     }
     
   
    return 0;
  }