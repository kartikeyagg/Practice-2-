#include<bits/stdc++.h>
using namespace std;

string solve(int A, int B){

  A = abs(A);
  B = abs(B);
  int r1 = A%B;
  int q1 = A/B;
  cout<<"q1 is "<<q1<<endl;
  if(r1==0){
    return to_string(q1);
  }
  map<int,string> mp;
  stack<int> st;
  string res = to_string(q1)+'.';
  int p;
  cout<<"erer\n";
  while(r1!=0){
    

    if(mp.find(r1)!= mp.end()){
      // string stk = "";
      // while(st.top()!=r1){
      //   stk = mp[st.top()] + stk;
      // }
      // stk = mp[r1]+stk;
      // res += ('('+stk+')');
      int ns = res.size();
      int ks = ns;
      while(st.top() != r1){

        ks--;
        st.pop();

      }
      ks--;
      cout<<"ks is "<<ks<<endl;
      res = res.substr(0,ks) + '(' +res.substr(ks,ns-ks);
      res+=')';
      return res;
    }
    p = r1*10;
    q1 = p/B;
    st.push(r1);
    mp[r1] = to_string(q1);
    res+=(to_string(q1));
    r1 = p%B;
  }


  return res;
}
int main() 
{  
    int a,b;
    
    string res = solve(-2147483648,-1);
    cout<<"res is "<<res<<endl;
    
    cout<<endl;
    return 0;
  }