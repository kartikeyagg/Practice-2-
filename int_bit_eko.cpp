#include<bits/stdc++.h>
using namespace std;

int bins(vector<int> &A,int key ){
    // finding the index which is just greater than or equal to the given key
    int n = A.size();
    int mid, high =n-1,low =0;

    while(high -low>1){

        mid = (high+low)/2;
        if(A[mid]>=key){
            high =mid;
        }
        else{
            low = mid+1;
        }

    }
    if(A[low]>=key){
        return low;
    }
    if(A[high]>=key){
        return high;
    }

    return -1;
}  

int countwood(int mid,vector<int> &A){

    int sum =0;
    //cout<<"adding \n";
    int tk = bins(A,mid);
    if(tk == -1){ return 0;}
    for(int i=tk;i<A.size();i++){
        int x = A[i];
        int temp  =max(x-mid,0);

        //cout<<temp<<" ";

        sum+= temp;

    }
    //cout<<endl;
    //cout<<"sum is "<<sum<<endl;
    return sum;


}


int solve(vector<int> &A, int B) {
    sort(A.begin(),A.end());

    int n = A.size();
    //cout<<"sorted array is \n";
    for(auto x:A){
        //cout<<x<<" ";
    }
    //cout<<endl;
    int low =0, high = A[n-1];
    int mid = (low+high)/2, k=0;
    // int k;
    while(high-low>1){

        //cout<<"#############\n";

        mid = (low+high)/2;

        //cout<<"high and low are "<<high<<" "<<low<<endl;

        //cout<<"mid is "<<mid<<endl;

        k  = countwood(mid,A) ;

        // if(k<B){
        //     high = mid;
            
        // }
        // else{
        //     low = mid+1;
        // }
        if (k>=B){
            low=mid;
        }
        else{
            high = mid-1;
        }
    }
    if(countwood(high,A)>=B){
        //cout<<"returning 2 \n";
        return high;
    }
    if(countwood(low,A)>=B){
        //cout<<"returning 1 \n";
        return low;
    }


    return -1;

}

int main() 
{  
    vector<int> vi = {117, 84, 50, 119, 74, 128 };
    int B = 58;

    int res = solve(vi,B);

    //cout<<"\n################## \n res: "<<res<<"\n ################# ";
    
    //cout<<endl;
    return 0;
  }