#include<iostream>
#include<vector>//arithmetic subarray with max sum
using namespace std;


int main(){
   vector<int> a = {5,9,2,4,6,8,20};
   int maxsum =a[1]+a[0],nowsum =maxsum,i=0,diff=a[1]-a[0];
   for(i=2;i<a.size();i++){
      if(a[i]-a[i-1]!=diff){
         diff=a[i]-a[i-1];
         nowsum = a[i-1]+a[i];
      }
      else{
         nowsum+=a[i];
      }
      if(maxsum<nowsum){
        maxsum= nowsum;
      }
   }

   cout<<maxsum;

   cout<<endl;
   return 0;
   //https://www.youtube.com/watch?v=eJcBH0xvG98&list=PLfqMhTWNBTe0b2nM6JHVCnAkhQRGiZMSJ&index=23
}