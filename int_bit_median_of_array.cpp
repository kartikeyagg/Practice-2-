#include<bits/stdc++.h>
using namespace std;

pair<int,int> left_right1(  vector<int> &A, int t){
    int n = A.size();
    int high = n-1,low =0,mid;
    while(high-low>1){
        mid = (high+low)/2;

        if(A[mid] == t){
            return make_pair(mid,n-mid-1);
        }
        if(A[mid]>=t){
            high = mid;
        }
        else{
            low = mid+1;
        }
    }
    if(A[low] == t){return make_pair(low,n-1-low);}
    if(A[high] == t){ return make_pair(high,n-1-high);}

    if(A[low] >t ){return make_pair(low,n-low); }
    if(A[high] >t ){return make_pair(high,n-high); }
    
    return make_pair(n,0);
}

int even_num(  vector<int> &A,  vector<int> &B){

    int na = A.size();
    int high = na-1,low =0,mid;
    pair<int,int> res ;
    int l,r;
    while(high-low>1){
            mid = (high+low)/2;
            res = left_right1(A,A[mid]);
            l = res.first;
            r= res.second;
            res = left_right1(B,A[mid]);
            l+=res.first;
            r+=res.second;
            if(l -r ==0 ){
                return A[mid];
            }
            else if(l>r){
                low = mid+1;
            }
            else{
                high = mid-1;
            }

        }
        mid = low;
        res = left_right1(A,A[mid]);
        l = res.first;
        r= res.second;
        res = left_right1(B,A[mid]);
        l+=res.first;
        r+=res.second;
        if(l -r ==0 ){
            return A[mid];
        }
        mid =high;
        res = left_right1(A,A[mid]);
        l = res.first;
        r= res.second;
        res = left_right1(B,A[mid]);
        l+=res.first;
        r+=res.second;
        if(l -r ==0 ){
            return A[mid];
        }
    
    return 0;
    
}

double solve(  vector<int> &A,  vector<int> &B){

    int na = A.size(), nb = B.size();
    int temp =0;
        int tk;

    int nt = na+nb;
    pair<int,int> res ;
    int low,mid,high;
    high = na-1;
    low = 0;
    int l,r;
    int ans = A[0];
    if(nt%2 ==1)
        {
            ans = even_num(A,B);
            if (ans ==0){
                ans = even_num(B,A);
            }
    }
    else{
        if(A[na-1] >B[nb-1]) { 

            tk = A[na-1];
            A.pop_back();

        }
        else {
            tk  =B[nb-1];
            B.pop_back();
        }
        ans = even_num(A,B);
            if (ans ==0){
                ans = even_num(B,A);
            }

    }
    return ans;
}



int main() 
{  
    
      vector<int> A = {1,4,5};
      vector<int> B = {2,3};
    // pair<int,int> res ;
    // res = left_right1(A,67);
    // cout<<"result is "<<res.first<<" "<<res.second<<endl;
    unordered_set<int> a = {2,3,1,4,2};

    cout<<(a.count(3))<<endl;

    auto res = solve(A,B);
    cout<<" \nres =  "<<res<<endl;
    
    cout<<endl;
    return 0;
  }