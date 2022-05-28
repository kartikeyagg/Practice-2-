#include<bits/stdc++.h>
using namespace std;
/*You're given a read only array of n integers. Find out if any integer occurs more than n/3 times in the array in linear time and constant additional space.
If so, return the integer. If not, return -1.

If there are multiple solutions, return any one.*/
// sol :- https://www.youtube.com/watch?v=yDbkQd9t2ig


int repeatn_3(const vector<int> &A){

    int n  =A.size(),num1=-1,num2 = -1;
    int count1 =0,count2 =0;
    if(n==0){return -1;}
    if(n<=2){
        return A[0];
    }
    int max_t = *max_element(A.begin(),A.end());
    int min_t = *min_element(A.begin(),A.end());
    if(max_t==min_t){
        return min_t;
    }

    for(int i=0;i<n;i++){
        if(A[i] == num1){
            count1++;
        }
        else if(A[i] == num2){
            if(A[i] == num2){
                count2++;
            }
        }
        else if(count1 == 0){
            num1 = A[i];
            count1 =1;

        }
        else if (count2 == 0){
            num2 = A[i]; count2++;
        }
        else{
            count1--;
            count2--;
        }
    }
    int t1 =0,t2=0;

    for(auto x:A){
        if(x == num1){ t1++;}
        else if(x == num2 ){t2++;}

        if(t1>(n/3) ){
            return num1;
        }
        else if(t2>(n/3)) {
            return num2;
        }
    }
    return -1;

}

int main() 
{  
    const vector<int> va = {1,1,1,3,3,2,2,2};

    int res = repeatn_3(va);
    cout<<res;
    
    cout<<endl;
    return 0;
  }