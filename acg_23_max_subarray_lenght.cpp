#include<iostream>
#include<vector>//arithmetic subarray with max lenght(continuos)
using namespace std;


int main(){
   vector<int> a = {10,7,4,6,8,10,11};
   int maxlenght =2,nowlenght =2,i=0,diff=a[1]-a[0];
   for(i=2;i<a.size();i++){
      if(a[i]-a[i-1]!=diff){
         diff=a[i]-a[i-1];
         nowlenght = 2;
         cout<<"diff at "<<a[i]<<endl;
      }
      else{
         nowlenght+=1;

      }
      if(maxlenght<nowlenght){
        maxlenght= nowlenght;
      }
   }

   cout<<maxlenght;

   cout<<endl;
   return 0;
   //https://www.youtube.com/watch?v=eJcBH0xvG98&list=PLfqMhTWNBTe0b2nM6JHVCnAkhQRGiZMSJ&index=23
}