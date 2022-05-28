#include <iostream>
#include <vector>
using namespace std;

int tilling(int k){
    int ways;
    if(k<=0){
        return 0;        
    }
    if(k==1){
        return 1;
    }
    ways = tilling(k-1)+ tilling(k-2);
    cout<<"the number of ways for "<<k<<" is "<<ways<<endl;
    return ways;
}

int main() 
{   
    int a;
    cout<<"Enter the number of colums"<<endl;
    cin>>a;
    int w = tilling(a);

    cout<<w;
    
    
    cout<<endl;
    return 0;
  }
  //https://www.youtube.com/watch?v=VQVeAQVs1d8&list=PLfqMhTWNBTe0b2nM6JHVCnAkhQRGiZMSJ&index=42