#include<bits/stdc++.h>
using namespace std;
int minSubsetSumDifference(vector<int>& arr, int n)
{
	// Write your code here.
    int sum1 =0 ;
    for(auto x: arr){
        sum1+= x;
    }
    sort(arr.begin(),arr.end());
    
    vector<vector<int>> tab((sum1+7)/2, vector<int> (0));
    
//     tab[0] = 0;
    int tk;
    tab[0].push_back(-1);
    
    for( int i =0 ;i< tab.size() ;i++){ // run over till the half of it only
        
        for(int j = 0;j<tab[i].size();j++){
            
            for(int k =tab[i][j]+1 ;k< n;k++){
                
                tk = i+arr[k] ;
                if(tk  == sum1/2) return abs(abs(sum1-tk) -tk);
                
                if(tk <= (sum1+2)/2){
//                 tab[tk].push_back(k);
                    if(tab[tk].empty()) tab[tk].push_back(k);
                    else
                    tab[tk][0] = min(k,tab[tk][0]);
                 }
            }
            
        }
        
    }
    for(int i = sum1/2 ;i>=0;i--){
        
        if(!(tab[i].empty())){
            return abs(abs(sum1-i) -i);
        }
        
    }
    
    return -1;
    
}

int main() 
{  
    vector<int> arr = {1,2,3,4};

    auto res = minSubsetSumDifference(arr,arr.size());

    cout<<"res is "<<res;
    
    
    cout<<endl;
    return 0;
  }