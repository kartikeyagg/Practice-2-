#include<bits/stdc++.h>
using namespace std;

vector<int> vi;
map<int,bool> mp;

bool rec1(int A, vector<int> &B, int prev){
    
    if(mp.find(A) != mp.end()){
        
        if(mp[A] == 0){
            return 0;
        }
        
    }
    
    if(A<0){
        return 0;
    }
    if(A==0){
        vi.push_back(prev);
        return 1;
    }
    
    for(int i =0; i<B.size();i++){
        
        if(rec1(A-B[i],B,i)){
            vi.push_back(prev);
            mp[A] = 1;
            return 1;
        }
        
    }
    mp[A] = 0;
    return 0;
    
}

vector<int> Solution(int A, vector<int> &B) {
    

    vi.clear();
    mp.clear();
    bool t1 =rec1(A,B,-1);
    vi.pop_back();
    reverse(vi.begin(),vi.end());
    return vi;
}

int main() 
{  
    // vector<int> temp = {3, 4};
    vector<int> temp = {6, 8, 5, 4, 7};

    temp = Solution(11,temp);
    
    for(auto x: temp){
        cout<<x<<" ";
    }
    cout<<endl;
    
    cout<<endl;
    return 0;
  }



      // if(A<0){
    //     return {};
    // }
    // if(A == 0){
    //     return {-1};
    // }
    // int n = B.size();
    // int t = A;
    // vector<int> vc;
    // for(int i = 0;i<n;i++){
        
    //     vc= solve(A-B[i],B);
    //     if(!vc.empty()){
            
    //         vc.push_back(i);
    //         return vc;
            
    //     }
        
    // }
    
    // return vc;
    