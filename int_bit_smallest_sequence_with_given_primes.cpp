#include<bits/stdc++.h>
using namespace std;

vector<int> solve(vector<int> & var,int t){

    priority_queue<int,vector<int> , greater<int> > pq;

    set<int> st;
    vector<int> res;

    pq.push(1);

    int c1 =0;
    int tmp;

    while(c1<t){

        tmp  = pq.top();
        pq.pop();
        if(tmp != 1){
        res.push_back(tmp);
        c1++;}

        for(auto x: var){

            if(tmp < INT_MAX/x && st.find(x*tmp) == st.end()){ // not found

                st.insert(x*tmp);
                pq.push(x*tmp);

            }
        }
        

    }
    return res;
    

}

int main() 
{  
    vector<int> vc= {2,3,5};
    vector<int> tk = solve(vc,5);

    for(auto x: tk){

        cout<<x<<" ";
    }
    
    cout<<endl;
    return 0;
  }
