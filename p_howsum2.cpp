#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;
map<int,vector<int>> mp;
//howsum function
vector<int> howsum(int *a, int target_sum,int size,int mins){
    
vector<int> tkt ;
vector<int> emp ;//empty
    if(mp.count(target_sum)>0 && target_sum!=0)
    {if((mp[target_sum]).at(0)!= -1){
        return mp[target_sum];
    }
    else{
        return {-1};
    }

    }
    if(target_sum==0){
        tkt.push_back(mins);
        return tkt;
    }
    else if(target_sum<0){
        mp[target_sum] = {-1};
        return tkt;// empty this time
    }
    for(int i =0;i<size;i++){
        tkt = howsum(a,target_sum-a[i],size,a[i]);
        if(tkt.size()!= 0){
            tkt.push_back(mins);
            mp[target_sum] = tkt;
            return tkt;
        }       
    }
    mp[target_sum] = {-1};
    return emp;
    }
int main(){
    int a[100]  = {5,3,4,7},size =4;
    // sort(a,a+size);
    int target_sum = 7;
    vector<int> arr  = howsum(a,target_sum,size,0);
    cout<<"\nprinting the resultant "<<endl;
    if(0/*arr[0]==-1*/){
        return 0;
    }
    for (int i = 0; i < arr.size()-1; i++)
    {
       cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}