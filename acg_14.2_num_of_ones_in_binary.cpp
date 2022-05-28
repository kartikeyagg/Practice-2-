#include <iostream>
#include <vector>
// prg for checking the num of 1 in a binary num
using namespace std;

int check1(int n){
    int count =0;
    while(n!=0){
        n = n & (n-1);
        count++;
    }
return count;

}
  
int main() 
{  int n;
    cout<<"Enter the number to be checked ";
    cin>>n;
    cout<<" \n the number of 1's are "<<check1(n);

    
    
    cout<<endl;
    return 0;
  }