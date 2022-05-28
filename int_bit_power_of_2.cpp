
#include<bits/stdc++.h>
using namespace std;

string q="";
string str1="";

string divideby2(string &A){

    q.clear();str1.clear();
    stringstream ss;
    int n = A.size();
    int temp =0,kt;
    
    for(int i=0;i<n;i++){
        ss.str("");
        temp = temp*10 + (A[i]-48);
        //cout<<"temp is "<<temp<<endl;
        kt = temp/2;
        //cout<<"kt is "<<kt<<endl;
        if(kt==0 && q.size()==0 ){

        }
        else{
        ss<<kt;
        str1 = ss.str();
        //cout<<"str1 is "<<str1<<endl;
        q += (str1);}

        temp = temp - (2*kt);
    }
// //cout<<"returning "<<q<<endl;
return q;

}


int power(string A) {

    unordered_set<char> st = {'0','2','4','6','8'};
    char ch;

    while(A!="0"){

        if(A =="2") return 1;
        //cout<<"current string is "<<A<<endl;
        ch = A[A.size() -1];
        if(st.count(ch) >=1 ){
            //cout<<"dividing \n";
            A = divideby2(A);
        }
        else
        return 0;
    }

    return 1;

}

int main() 
{  
    string s;
    s = "16";
    int res;
    res = power(s);
    cout<<"\nans is "<<res<<endl;
    
    cout<<endl;
    return 0;
  }