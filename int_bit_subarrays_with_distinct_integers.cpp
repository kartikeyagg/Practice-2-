#include<bits/stdc++.h>
using namespace std;

int AtmostB(vector<int> &A, int B) {
    
    unordered_set<int> st;
    int n = A.size(),i,j,count1 =0;
    int si1 =0;
    count1 =0;
    for(i =0;i<n;i++){
        st.clear();
        si1 =1;
        count1++ ;
        // cout<<i<<","<<i<<endl;
        st.insert(A[i]);
        for (int j = i+1; j < n; j++)
        {
            if(st.count(A[j]) ==0){
                st.insert(A[j]);
                si1++;
            }
            if(si1<=B){
                count1++;
                // cout<<"i,j ="<<i<<" "<<j<<endl;
            }
            else{
                break;
            }
        }        
    }
return count1;
}

int main() 
{  
    vector<int> A = {1, 2, 1, 3, 4};
    int B =3;
    int res = AtmostB(A,B);
    int res1 =AtmostB(A,B-1);
    cout<<res<<endl;

    cout<<res1<<endl;

    cout<<"\nsub with distinct integers are \n"<<res-res1<<endl;
    
    
    cout<<endl;
    return 0;
  }