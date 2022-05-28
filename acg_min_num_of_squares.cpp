#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define ll long
#define pi pair<int,int>
#define si size()
int min_square(int n){
    if(n==1|| n==0||n==2||n==3){
        return n;
    }
    //   vi a = {};
    //   vector<vi> vec2(n+1,a);
    //   vec2[1] = {1};
    //   for (int i = 1; i*i < vec2.si; i++)
    //   {
    //       vec2[i*i] = {i};
          
    //   }
    //   for (int i = 1; i <vec2.si ; i++)
    //   {
    //       if()
    //   }
    int ans = INT_MAX;
    for(int i=0;i*i<n;i++){
        ans = min(ans,min_square(n-(i*i))+1);
    }
      
      

}
int min2square(int n){

}

int main() 
{  
   int n = 26;
   int res = min_square(n);
   cout<<"Result is "<<res<<endl; 

    
    cout<<endl;
    return 0;
}