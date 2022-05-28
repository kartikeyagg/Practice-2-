#include<bits/stdc++.h>
using namespace std;

bool checkc(vector<int> &A,int B, int m){

    int n = A.size();
    int count =0,k =0,temp =0;
    while(k<n){

        temp = count+A[k];

        if(temp>m){
            B--;
            count =0;
        }

        else{
            k++;
            count = temp;
        }


    }
    if(B<=0) return false;
    return true;


}


int solve(vector<int> &A, int B) {

    int low = *max_element(A.begin(),A.end());
    int mid ,  high =0,n = A.size();
    for(auto x:A){
        high+=x;
    }
    
    if(n ==1) return A[0];
    if(B==1) return high;

    while(high-low>1){

        cout<<"high  ="<<high<<" low ="<<low<<endl;

        mid = (high+low)/2;
        
        bool k = checkc(A,B,mid);

        if(k){
             high=mid ;
        }
        else{
            low = mid+1;
        }


    }

    if(checkc(A,B,low)) {return low;}
    if(checkc(A,B,high)) {return high;}

    return -1;


}

int main() 
{  
    vector<int> a = { 16, 2, 11, 4, 18, 17, 17, 8, 8, 6, 7, 9, 17, 20, 10, 5, 2, 11, 3 };
    int B = 10;
    int res = solve(a,B);
    cout<<"\n#### \n res = "<<res<<" \n####";
    
    
    cout<<endl;
    return 0;
  }