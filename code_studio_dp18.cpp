#include<bits/stdc++.h>
using namespace std;
// #include<bits/stdc++.h>


int nc = 0;
int rec1(int i, vector<int> &arr,int target,vector<vector<int>> &vec1 ){
    

    if(target == 0){

        return 1;
    }
    if(target< 0){


        return 0;
    }

    if(i>=0 && vec1[target][i] != -11){ //means answer is present

        
        return vec1[target][i];
    }

    int res =0 ;
    for(int j = i+1;j<nc;j++){
        
        res += rec1(j,arr,target-arr[j],vec1);

    }

    if(i != -1)
    vec1[target][i] = res;
    return res;
    
}
int findWays(vector<int> &num, int tar)
{

    nc = num.size();
    vector<vector<int>> vec1(tar+1,vector<int> (nc+1 , -11));
   
    int res1 = rec1(-1,num,tar,vec1);


    return res1;
}  
int countPartitions(int n, int d, vector<int> &arr) {
    // Write your code here.
    int sum1 =0 ;
    for(auto x: arr){
        sum1+=x;
    
    }
    cout<<"sum1 is "<<sum1<<endl;
    
    if((sum1+d)%2 == 1){
        return 0;
    }
    int target = (sum1 + d)/2;
    
    int res = findWays(arr,target);
    return res;
}



int main() 
{  
    
    // 14 50
    // 12 4 14 7 10 9 10 7 12 4 1 1 5 0
    int d = 50, n = 14;
    vector<int> art = { 12, 4, 14, 7, 10, 9, 10, 7, 12 ,4, 1, 1 ,5 ,0};
    int res1 = countPartitions(n,d,art);
    cout<<" \n the result is "<<res1<<endl;
    cout<<endl;
    return 0;
  }