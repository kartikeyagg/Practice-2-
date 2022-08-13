#include<bits/stdc++.h>
using namespace std;
  
int main() 
{  
    ofstream myfile;
    myfile.open ("output.txt");
    ifstream infile;
    infile.open("input.txt");
    int m,n;
    // cin>>n>>m;
    infile>>n>>m;
    char a ,b;
    if(n>m){
        a = 'B';
        b= 'G';
    }
    else{
        a = 'G';
        b = 'B';
    }
    int i;
    for (i = 0; i <m &&i < n; i++)
    {
        // cout<<a<<b;
        myfile<<a<<b;
    }
    int ind=i;
    while(ind<n){
        // cout<<a;
        myfile<<'B';
        ind++;
    }
    while(i<m){
        // cout<<b;
        myfile<<'G';
        i++;
    }
    
    // cout<<endl;
    myfile.close();
    return 0;
  }