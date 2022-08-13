#include<bits/stdc++.h>
using namespace std;
#define ll long long

int rec(vector<vector<int>> &points,int day,int prev,vector<vector<int>> &memo){
    
    if(day>=points.size()){
        return 0;
    }
    
    if(prev !=-1 && memo[day][prev] != -11){
        return (memo[day][prev]);
    }
    int res = -1;
    
    for(int i =0 ;i<3;i++){
        if(i==prev){ continue;}
        res = max(res,points[day][i] +rec(points,day+1,i,memo) );
    }
    
    if(prev!=-1) memo[day][prev] = res;
    return res;
    
}

int ninjaTraining(int n, vector<vector<int>> &points)
{
    // Write your code here.
    vector<vector<int>> memo(n+1,vector<int> (3,-11)); 
    cout<<"fds \n";
    // call the function as prev index = -1
    return (rec(points,0,-1,memo));
}
int main() 
{  
    vector<vector<int>> vec = {
                {1, 2, 5 },
                {3, 1, 1 },
                {3, 3, 3 }
    };

    int res = ninjaTraining(vec.size(),vec);
    cout<<"res is "<<res<<endl;
    cout<<endl;
    return 0;
  }