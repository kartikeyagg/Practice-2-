#include<bits/stdc++.h>
using namespace std;


bool cmpv(vector<int> &A,vector<int> &B){
    return A[0]<B[0];
}

pair<int,int> bins(vector<int> &B ,int t){
    int high,low,mid,i=0;
    int n = B.size();
    high = n-1;
    if(B[0]>t){
        return make_pair(0,n);
    }
    if(B[n-1] <t){
        return make_pair(n,0);
    }
    low = 0;
    while(high-low>1){
        mid = (high+low)/2;
        int k =B[mid];
        if( k == t){
            return make_pair(i,n-i-1);
        }
        else if(k>=t){
            high = mid;
            
        }
        else{
            low  = mid+1;
        }

    }
if(B[low]>=t ){ 
    if (B[low] == t){return make_pair(low,n-low-1);}
    return make_pair(low,n-low);}
if(B[high]>=t ){ 
    if(B[high] == t){return make_pair(high,n-high-1);}
     make_pair(high,n-high);}

return (make_pair(n,0));

}


bool lookfor(vector<vector<int>> &A, int t){

    pair<int,int> res={0,0} ;
    pair<int,int> temp={0,0} ;
    cout<<"T == "<<t<<endl;
    for(int i=0;i<A.size();i++){


        temp = bins(A[i],t);
        cout<<"for row = "<<i<<" smaller and greater are "<<temp.first<<" "<<temp.second<<endl;
        

        res.first += temp.first;
        res.second += temp.second;

    }

    cout<<"for t="<<t<<" smaller and greater elements are "<<res.first<<" "<<res.second<<endl;


    if(res.first == res.second)
{
    return true;
}
return false;
    

}

int findMedian(vector<vector<int> > &A) {

    int n =A.size();
    int m = A[0].size();

    if(n==1 && m==1) { return A[0][0];}

    sort(A.begin(),A.end(),cmpv);

    for (int i=0;i<n;i++){
        for(int j=0;j<m;j++){

           int res = lookfor(A,A[i][j]) ;
           if(res) { return A[i][j] ;}

        }
    }

    cout<<"none found "<<endl;

    return A[0][0];


}


int main() 
{  
    vector<vector<int>> A = {   {1, 3, 5},
            {2, 6, 9},
            {3, 6, 9}   };

        int res = findMedian(A);

        cout<<"res is "<<res<<endl;
    
    cout<<endl;
    return 0;
  }