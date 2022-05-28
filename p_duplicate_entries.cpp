#include <bits/stdc++.h>
#include<iostream>
#include<array>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,7,8,9,10};
    int size = sizeof(arr)/sizeof(arr[0]);
    
    int *low1, *low2, *up1;
    low1 = lower_bound(arr, arr+size, 7);
    up1 = upper_bound(arr, arr+size, 7);

    cout<<"1st index is "<<low1 - arr<<endl;
    cout<<"no of duplicate entries is "<<up1-low1<<endl;

    

    return 0;
}