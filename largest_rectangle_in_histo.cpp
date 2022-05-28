#include<bits/stdc++.h>
using namespace std;

int max_rec(vector<int> &vec){
    vec.push_back(0);
    int n = vec.size();
    int i(0),j(0);
    int marea = 1;
    stack<int> st;
    int maxh =0;
    st.push(vec[0]);
    for (int i = 1; i < n; i++)
    {   
        maxh = max(maxh,vec[i]);
        if(vec[i]>st.top()){
            st.push(vec[i]);
        }
        else{
            // "this world is mine"
            // marea  = max(marea,(i-j)*5 );
            while(st.top()>vec[i]){
                marea = max(marea,(i-j)*st.top());
                st.pop();
            }
            
        }
    }
    
}

int main() 
{  
    vector<int> vec = {2,1,5,6,2,3};

    
    cout<<endl;
    return 0;
  }