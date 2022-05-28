// determine the pos of element present in array more than twice
// if two or more such element present print the element occuring first in the array
#include <iostream>
#include <vector>
#include <map> 
using namespace std;

int main()

{
    vector<int> a = {1, 9,3,5, 4, 3, 5, 6};
    map<int,int> mp;
    int i=0,minindex=31000;
    for(i=0;i<a.size();i++){

        if(mp.count(a[i])==0){
            mp[a[i]] = i;
        }
        else{
            minindex = min(minindex,mp[a[i]]); // if found a num again then updating minindex with its first occurence if it is smaller than current minindex;
        }
        
        
    }
    if (minindex==31000){
        cout<<-1;
    }
    else{
    cout<<minindex+1;
    }cout << endl;
    return 0;
    //https://www.youtube.com/watch?v=kJW_iXrwePE&list=PLfqMhTWNBTe0b2nM6JHVCnAkhQRGiZMSJ&index=24
}