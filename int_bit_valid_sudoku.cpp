#include<bits/stdc++.h>
using namespace std;
int isValidSudoku(vector<string> &A) {
    
    set<char> st;
    string t;
         
    for(int i =0;i<9;i++)
    {
        st.clear();
        t = A[i];
        for(auto x:t){
            if(x == '.') continue;
            if(!st.insert(x).second){
                return 0;
            }
        }
    }
    for(int i =0;i<9;i++)
    {
        st.clear();
        
        for(int j =0 ;j<9;j++){
            if(A[j][i]== '.') continue;
            
            if(!st.insert(A[j][i]).second){
                return 0;
            }
            
        }
        
    }
    char ch;
    for(int i=0;i<9;i+=3){
        for(int j =0 ;j<9;j+=3){
            st.clear();
            for(int k = 0;k<3;k++){
                for(int h = 0;h<3;h++){
                    ch = A[i+k][j+h];
                    if(ch == '.') continue;
                    
                    if(!st.insert(ch).second){ return 0;}
                    
                }
            }
            
            
        }
    }
    
    
    
    
return 1;}
  
int main()  
{  
    vector<string> a = {"....5..1.", ".4.3.....", ".....3..1", "8......2.", "..2.7....", ".15......", ".....2...", ".2.9.....", "..4......" };
    int res = isValidSudoku(a);
    cout<<"res is "<<res;
    cout<<endl;
    return 0;
  }