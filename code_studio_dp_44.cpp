#include<bits/stdc++.h>
using namespace std;


// #include<bits/stdc++.h> 
//  gti and mti store the greatest and minimum element's index
vector<int> rec1( int i,vector<int> &vec,int gti,int mti,vector<int> curr){
    
    if(i>=vec.size()){
        return curr;}
    
    cout<<" for element "<<vec[i]<<" at index= "<<i<<" the gti and mti = " <<gti<<" "<<mti<<endl;
    
//     int res =0 ;
//     int take=0,not_take;
    vector<int> take,not_take;
    // not taking 
//     curr = rec1()
    
    // take
    // if(curr.size() ==0 || (vec[i]%mti == 0) || (gti%vec[i]) == 0 ){
    if(curr.size() ==0 || (vec[i]%gti == 0) || (mti%vec[i]) == 0 ){
        cout<<vec[i]<<" is taken \n ";
        curr.push_back(vec[i]);
//         gti = max(gti,vec[i]);
//         mti = min(mti,vec[i]);
        take = rec1(i+1,vec,max(gti,vec[i]),min(mti,vec[i]),curr );
        curr.pop_back();
    }
    not_take = rec1(i+1,vec,gti,mti,curr);
    if(take.size()>not_take.size()){
        return take;
    }
    return not_take;
    
}

vector<int> divisibleSet(vector<int> &arr){
    // Write your code here.
    sort(arr.begin(),arr.end());
    
    return rec1(0,arr,-1,1e8+2,{});
    
}  
int main() 
{  
    vector<int> arr = {1,7,8,4,16};

    arr = divisibleSet(arr);

    cout<<"answer is \n";
    for(auto x: arr){
        cout<<x<<" ";
    }

    
    cout<<endl;
    return 0;
  }