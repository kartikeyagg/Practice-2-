#include <iostream>
#include <vector>
using namespace std;
int getbit(int n, int pos){
    return (1<<pos & n)!=0;
}
int setbit(int n, int pos){

    return n | (1<<pos);
}

int unique(vector<int> A)
{
    int n =A.size();
    int result =0;
    for (int i = 0; i < 64; i++)
    {
        int sum =0;
        for (int j = 0; j < n; j++)
        {
            if(getbit(A[j],i)){
                sum++;
            }
        }
        if(sum%3 !=0){
            result  = setbit(result,i);
        }
        
    }
    return result; 
    
}
  
int main() 
{  
    vector<int> a = {1,3,2,3,1,3,2,4,1,2};

    cout<<"the result is "<<unique(a);
    
    cout<<endl;
    return 0;
  }