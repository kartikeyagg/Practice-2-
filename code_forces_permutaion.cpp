#include<bits/stdc++.h>
using namespace std;

void permutaions(int a){
    // cout<<endl;
    int i=0;
    int t;
    // int j = 1;
    cout<<"2"<<endl;
    while((2*i)+1 <= a){

        t = (2*i) +1;
        // j =1;
        while(t <=a){
            cout<<t<<" ";
            t= t*2;
        }
    i++;
    }
cout<<endl;
}

int main() 
{  
    int k,a;
    cin>>k;
    for (int i = 0; i < k; i++)
    {
        cin>>a;
        permutaions(a);
    }
    
    
    // cout<<endl;
    return 0;
  }