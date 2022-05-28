#include<bits/stdc++.h>
using namespace std;
// this program aim to reverse the senetence
// but not the words
// I am me --> me am I
int main() 
{  
    stack<string> st;
    string k;
    cout<<"enter the string to be reversed \n";
    // cin>>k;
    getline (cin,k);
    cout<<"the entered string is #"<<k<<"#"<<endl;
    int n = k.size();
    string word="";
    cout<<"n is "<<n<<endl;
    for (int i = 0; i < n; i++)
    {   
        // cout<<"for i="<<i<<endl;
        word = "";
        while(k[i]!=' ' && i<n){
            word+=k[i];
            i++;
        }
        st.push(word);
    }
    cout<<"made the stack\nwith size "<<st.size()<<endl;
    while(!st.empty()){
        cout<<st.top();
        cout<<" ";
        st.pop();
    }
    


    
    cout<<endl;
    return 0;
  }