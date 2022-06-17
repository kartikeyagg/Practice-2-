#include<bits/stdc++.h>
using namespace std;
// given an array find all the quadlets suming upto a given number 

#define ll long long

vector<vector<int>> solve(vector<int> &vec,int k){

  vector<vector<int>> res;
  sort(vec.begin(),vec.end());
  int n=vec.size(),lt=2,rt = n-1;
  int temp,prevrt = -33424,prevlt = -54293;
  int ip = -3432,jp =-4343;

  for (int i = 0; i < n-1; i++)
  { 
    while( i<n && vec[i] == ip){
      i++;
    }
    if(i == n){
      break;
    }
    for (int j = i+1; j < n; j++)
    {
      while( j<n && vec[j] == jp){
        j++;
      }
      if(j == n){
        break;
      }
      lt = j+1;
      rt = n-1;
      while(lt<rt){
      
        temp  =(vec[i]+vec[j]+vec[lt]+vec[rt]);

        if(temp >k){
          prevrt = vec[rt];
          while( rt >=0 && vec[rt] == prevrt){
            rt--;
          }
        }
        else if (temp<k){
          prevlt = vec[lt];
          while(lt<n && vec[lt] == prevlt){
            lt++;
          }
          // lt++;
        }
        else{
          res.push_back({vec[i],vec[j],vec[lt],vec[rt]});
          // rt++;
          prevrt = vec[rt];
          while(rt >=0 &&vec[rt] == prevrt){
            rt--;
          }
        }
      }
      jp = vec[j];
    }
    ip = vec[i];
  }
return res;
}

int main() 
{  

    int target =9;
    vector<int> vec = {4,3,3,4,4,2,1,2,1,1};
    vector<vector<int>> res = solve(vec,target);
    for(auto x: res){
      for(auto y: x){
        cout<<y<<" ";
      }
      cout<<endl;
    }
    

    
    cout<<endl;
    return 0;
  }