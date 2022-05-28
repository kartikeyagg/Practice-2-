#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
 // not correct code 
int main() 
{  int n =1024000000;
    int k=n; 
    vector<int> ar;
    for (int i = 2; i < (k+2)/2; i++)
    {
        if(n%i == 0){
            ar.push_back(i);
            n = n/i;
            i--;

        }
        if(i>n){
            break;
        }
        // if(i*i>n-2){

        // }
    }
    cout<<"prime factors are "<<endl;
    for (int i = 0; i < ar.size(); i++)
    {
        cout<<ar[i]<<" ";
    }   
    if(ar.size()==0){
        cout<<"ans is 0"<<endl;
        return 0;

    }
    cout<<endl;

    int temp = ar[0],count=0,mincount =10000;
    vector<int> cvec;
    cout<<"count of prime factors is"<<endl;
    for (int i = 0; i < ar.size(); i++)
    {
        if(ar[i] == temp){
            count++;
            if(i ==ar.size()-1 ){
                cvec.push_back(count);
                cout<<count<<" ";
                if(count<mincount && count>1){
                    mincount = count;
            }
            
        }
        }
        else{
            if(count<mincount && count>1){
                mincount = count;
            }
            cvec.push_back(count);
            cout<<cvec[cvec.size()-1]<<" ";
            count =1;
            temp =ar[i];
            if(i ==ar.size()-1 ){
                cvec.push_back(count);
                cout<<count<<" ";
                if(count<mincount && count>1){
                    mincount = count;
            }

}
        }

    }
    cout<<endl;
    cout<<"min count is "<<mincount<<endl;
    for (int i = 0; i < cvec.size(); i++)
    {
        if(cvec[i]%mincount != 0){
            cout<<" ans is "<<0<<endl;
            return 0;
        }
    }
    cout<<" ans is "<<1<<endl;

    return 1;
    
    
    


    
    
    
    cout<<endl;
    return 0;
  }