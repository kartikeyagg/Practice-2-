#include <iostream>
#include <vector>
using namespace std;

void check_pow_2(int n){

    // the binary of a number which is power of 2
    // has only one '1'

    n = n& (n-1);
    // (n& n-1) has same bit as n except the rigthmost set bit(the right most 1 in the original n)
    // so (n& n-1)  should give '0' for perfect square

if(n==0)
    cout<<" yes the num is power of 2 \n";
else{
    cout<<" no the num is not power of 2"<<endl;
}

}
  
int main() 
{
     int n;
     // program to check if a given num is power of 2
     cout<<"enter the number to be checked ";
     cin>>n; 
     check_pow_2(n); 

    
    cout<<endl;
    return 0;
  }