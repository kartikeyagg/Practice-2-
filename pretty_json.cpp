#include<bits/stdc++.h>
using namespace std;
// Solution::
vector<string> prettyJSON(string A) {

    vector<string > res;
    string temp ="";
    stack<char> st;
    int n = A.size();

    for (int i = 0; i < A.size(); i++)
    {
        temp += A[i];
        if(A[i] == '{' || A[i] =='['){
            for (int j = 0; j < st.size(); j++)
            {
                temp = "\t"+temp;
            }
            st.push(A[i]);            
            res.push_back(temp);
            temp = "";
        }
        else if(A[i]=='}' || A[i] ==']' ){
            temp.pop_back();
            for (int j = 0; j < st.size(); j++)
            {
                temp = "\t"+temp;
            }
            st.pop();
            res.push_back(temp);
            temp = "";
            temp+=A[i];

        }


        
    }
    res.push_back(temp);

    return res;
    

    

}

int main() 
{  
    string s = "{A:'B',C:{D:'E',F:{G:'H',I:'J'}}}";
    cout<<"\n";
    auto res = prettyJSON(s);
    for(auto x:res){
        cout<<x<<endl;
    }
    
    cout<<endl;
    return 0;
  }