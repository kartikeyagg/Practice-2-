#include<bits/stdc++.h>
using namespace std;
#define vi vector<int> 
// Input 2:
//     A = 10 // No of painters 
//     B = 1  // time taken for paiter to palong long one unit
//     C = [1, 8, 11, 3] // array conataining number of units in one board
// Output 2:
//     11

bool check_feisable(vi &C , long long a,long long t){

    long long sum1 =0;
    long long n =C.size();
    long long i=0;
   // cout<<"for t="<<t<<endl;
    while(i<n){


        long long temp = sum1+C[i];
        //cout<<"temp is "<<temp<<endl;
        if(temp > t){
            sum1 =0;
            a--;
            //cout<<"subing a \n";
        }
        else{
            sum1 =temp;
            i++;
            
        }

    }
    if(a<=0){ //
        return false;
    }
    return true;

}

long long solve(long long A,long long B, vector<int>  &C ){
    long long n = C.size();
    if(n ==1){
        return C[0];
    }

    long long low = *max_element(C.begin(),C.end());

    long long high =0,mid;
    for(auto x:C){
        high += x;
    }
    if(A==1){
        return high;
    }
    while(high-low >1){
        mid = (high+low)/2;

        bool k = check_feisable(C,A,mid);
        if(k){

            high = mid;
        }
        else{
            low = mid+1;
        }
    }
    if(check_feisable(C,A,low)){cout<<"return2 \n"; return low; }

    if(check_feisable(C,A,high)){cout<<"return1 \n"; return high; }


    return -1;
}
  
int main() 
{  long long a=2,b =7;
cout<<"hello \n";

    // vector<int> c = {12,34,67,90};
    vector<int> c = {10,20,30,40};
    long long res = solve(a,b,c);
    cout<<"result is "<<res;
    
    
    cout<<endl;
    return 0;
  }