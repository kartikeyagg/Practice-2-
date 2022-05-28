
#include<bits/stdc++.h>
using namespace std;

#define mod 1000003

long long factorial(long long n)
{
    // return (n==1 || n==0) ? 1: (n%mod * factorial(n - 1)%mod)%mod;
    return (n==1 || n==0) ? 1: (n * factorial(n - 1));
}

long long solve(string &s){

    long long n = s.size();
    string A =s;
    // string l =s;
    sort(A.begin(),A.end());
    if(s==A){return 1;}
    A =s;
    long long ans =1;
    long long greater_elem =0;
    long long elem_right =0;
    map<long long,long long> mp;
    for(long long i =0 ;i<n-1;i++){
        mp.clear();
        greater_elem = 0;
        mp[A[i]] =1;
        for(long long j =i+1;j<n;j++){
            if(A[i]>A[j]) greater_elem++;
            if(mp.count(A[j])==0){ mp[A[j]] =1;}
            else { mp[A[j]]+=1 ;}

        }
        elem_right = n-i-1;

        long long temp = ((greater_elem%mod) * (factorial(elem_right)));

        for(auto i:mp){
            temp = temp/(factorial(i.second));
        }
        ans  =  (ans%mod + temp%mod);

    }



return ans%mod;
    

}


int main() 
{  
    string s = "abab";

    // abab =2
    // aabb = 1;
    //bbaa  =6;

    long long res;

    res = solve(s);
    cout<<"results for "<<s<<" is "<<res<<endl;
    s = "aabb";
    res = solve(s);
    cout<<"results for "<<s<<" is "<<res<<endl;
    s = "bbaa";
    res = solve(s);
    cout<<"results for "<<s<<" is "<<res<<endl;
    s = "sadasdsasassasas";
    res = solve(s);
    cout<<"results for "<<s<<" is "<<res<<endl;
    s = "asasdsdsadasdadsadasdsa";
    res = solve(s);
    cout<<"results for "<<s<<" is "<<res<<endl;

    // asasdsdsadasdadsadasdsa 

    
    cout<<endl;
    return 0;
  }