#include<bits/stdc++.h>
using namespace std;
string minWindow(string A, string B) {

    string res = "";
    int na =A.size(), nb = B.size();
    int lh = 0,rh = 0;
    // rh is on the right of the last element 
    // j is on the first element
    if(na<nb || nb ==0){
        return res;
    }
    sort(B.begin(),B.end());
    map<char,int> mp;

    for(auto x:B){

        mp[x]++;

    }
    cout<<"the freq map 1 is "<<endl;
    for(auto x: mp){
        cout<<x.first<<" :"<<x.second<<endl;
    }
    cout<<endl;

    int mat_c =0;
    map<char,int> sm; // the map for counting the elements acquired

    for(auto x:B){
        sm[x] = 0;
    }
    
    while(rh<na && mat_c!=nb){

        if(mp.find(A[rh])!=mp.end()){ // the current element is one of the element in B 

            if(mp[A[rh]] > sm[A[rh]]){ // the current element is needed to complete the substring
                
                mat_c++; // increamenting the matchcount
            }

            sm[A[rh]]++;

        }
        rh++;
    }
    if(mat_c !=nb){
        return res; // not found , returning the empty string
    }
    cout<<"first rh is "<<rh<<endl;
    cout<<"cout na is "<<na<<endl;
    pair<int,int> pt = {0,INT_MAX};
    while(lh<na && rh<na){
    cout<<"wlp lh="<<lh<<" rh="<<rh<<endl;
     if(mat_c >= nb){
        while( lh<na && mat_c>= nb){

            if(mp.find(A[lh]) !=mp.end()){
                
                if(sm[A[lh]] <= mp[A[lh]]){
                    mat_c--;
                }
                sm[A[lh]]--;
            }
            cout<<"lh and rh are "<<lh<<" "<<rh<<endl;
            if(rh-lh < pt.second-pt.first){
                pt.first = lh;
                pt.second = rh;
            }
            lh++;
        }
        }
        else{
            while(rh<na && mat_c!=nb){
            
            cout<<" rh ="<<rh<<endl;
            if(rh == 11){
                for(auto tk: sm){
                    cout<<tk.first<<" : "<<tk.second<<endl;
                }
                for(auto tk: mp){
                    cout<<tk.first<<" : "<<tk.second<<endl;
                    
                }
            }
            else if (rh ==12){
                cout<<A[rh]<<endl;
            }

            if(mp.find(A[rh])!=mp.end()){ // the current element is one of the element in B 

                if(mp[A[rh]] > sm[A[rh]]){ // the current element is needed to complete the substring
                    
                    mat_c++; // increamenting the matchcount
                }

                sm[A[rh]]++;

            }
            rh++;
        }

            }
    }


// 
     if(mat_c >= nb){
        while( lh<na && mat_c>= nb){

            if(mp.find(A[lh]) !=mp.end()){
                
                if(sm[A[lh]] <= mp[A[lh]]){
                    mat_c--;
                }
                sm[A[lh]]--;
            }
            cout<<"lh and rh are "<<lh<<" "<<rh<<endl;
            if(rh-lh < pt.second-pt.first){
                pt.first = lh;
                pt.second = rh;
            }
            lh++;
        }
        }
    cout<<"resultant lh and rh are "<<pt.first<<" ,"<<pt.second<<endl;

    res = A.substr(lh-1,rh-lh+1);
    
    return res;
}
  
int main() 
{  
    string A = "ADOBECODEBANC";
    string B = "ABC";
    string res = minWindow(A,B);

    cout<<"the required substring is "<<res<<endl;

    
    cout<<endl;
    return 0;
  }