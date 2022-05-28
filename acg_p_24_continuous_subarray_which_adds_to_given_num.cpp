#include <iostream>
#include <vector>
#include <map> 
using namespace std;
//Given an unsorted array A of size N of non-negative integers, find a continuous
//subarray which adds to a given number S.

int main(){    
    vector<int> a = {1,8,2,4,9,3,8};//{1,2,3,7,5};
    int i =0,x,y;
    int s=12;//desired sum
    int kt =0,init_index=0,final_index =0;
    for(i=0;i<a.size();i++){
        if(kt==s){
            final_index = i-1;
            cout<<"Final and inital index are "<<final_index<<" "<<init_index<<endl;

            break;
        }
        else if(kt>s){
            // init_index= 0;
            while(kt>s){
                kt=kt-a[init_index];
                init_index++;
            }
            if(kt==s){
            final_index = i-1;
            cout<<"Final and inital index are "<<final_index<<" "<<init_index<<endl;
            break;
            }
        }
        kt+=a[i];
    }
    
    cout<<endl;
    return 0;
    //https://www.youtube.com/watch?v=kJW_iXrwePE&list=PLfqMhTWNBTe0b2nM6JHVCnAkhQRGiZMSJ&index=24
}
