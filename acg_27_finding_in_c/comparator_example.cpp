#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;
 bool cmp(vector<int> a,vector<int> b){
   if(a.at(0)!= b[0]){
     return a[0]>b[0];
   }
   else{
     return a[1]>b[1];
   }

 } 
void display_vec(vector<vector<int>> a){
  for (int i = 0; i < a.size(); i++)
  {
    for (int j = 0; j < a[i].size(); j++)
    {
      cout<<a[i][j]<<" ";
    }
    cout<<endl;
    
  }
  
}
int main() 

{
  vector<vector<int>> a = {{23,54},{43,234},{49,87},{12,90},{12,45},{60,87},{908,65}};
    
    sort(a.begin(),a.end(),cmp);
    display_vec(a);
    
    cout<<endl;
    return 0;
  }