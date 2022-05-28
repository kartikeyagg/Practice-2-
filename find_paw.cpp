#include <iostream>
#include <vector>
using namespace std;


int find_paw(int x ,int y){
    int temp=0;

    if(x==0){
        return 0;
    }
    if(x ==1){
        return x;
    }
    if(y==0){
        return 1;
    }
    if(y==1){
        return x;
    }

    if(y%2 ==0){
        temp = find_paw(x,y/2);
        return temp*temp;
        
    }
    else{
        temp  =find_paw(x,y/2);
        return temp*temp*x;
    }



}

int main() 
{  int x =2200,y=3,res = 0;
    int q =20;

    res = find_paw(x,y);
    cout<<"res is "<<res<<endl;
    int t=0;
    t= -21%20;
    cout<<"t is "<<t;

    
    
    cout<<endl;
    return 0;
  }