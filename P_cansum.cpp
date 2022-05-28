#include<iostream>
#include <bits/stdc++.h>
// to find if elements of a given array can add up to desired 
// number provided
using namespace std;
int cansum(int num,int *a,int *ma,int size){
    // cout<<"num is "<<num<<endl;
    int x=0;
    if (num==0){
        return 1;
    }
    else if (num<0){
        return 0;
    }

    if(ma[num]==1){
        cout<<"memo1"<<endl;
        return 1;
    }
    else if (ma[num]== 0){
        cout<<"memo0"<<endl;

        return 0;
    }
    // cout<<"size is "<<(sizeof(a)/sizeof(a[0]))<<endl;
    for (int i = 0; i < size; i++)
    { 
        if (num-a[i]>-1){
       x = cansum(num-a[i],a,ma,size);
        if (x ==1){
            ma[num-a[i]] = 1;
            break;
        }
        else if(x==0){
            ma[num-a[i]] = 0;
        }
       
    }}
    return x;    
}
int main(){
    int num,a[]= {14,7};
    int size = sizeof(a)/sizeof(a[0]);
    // int max = 5;
    cout<<"have you provided the right size of array"<<endl;
    cout<<"Enter the number to check "<<endl;
    cin>>num;
    int ma[num+1];

    for (int  i = 0; i < num+1; i++)
    {
        ma[i] = -1;
    }
  
    int t = cansum(num,a,ma,size);
    if(t){
        cout<<"yes the number in array can add up to be the number provided "<<endl;
    }
    else{
        cout<<"no , the number provided cant be formed from the numbers in the array"<<endl;
    }


    return 0;
}