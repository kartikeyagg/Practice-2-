#include<bits/stdc++.h>
using namespace std;

int previousFibonacci(int n)
{
    double a = n / ((1 + sqrt(5)) / 2.0);
    return round(a);
}


int main() 
{  
    int n;
    cin>>n;
    if(n==1){
        cout<<"0 0 1"<<endl; return 0;
    }
    int a,b;
    a = previousFibonacci(n);
    b = previousFibonacci(a);
    int x = n-(a+b);
    cout<<x<<" "<<b<<" "<<a<<endl;

    return 0;
  }