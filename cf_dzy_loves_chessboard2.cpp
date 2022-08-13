#include<bits/stdc++.h>
using namespace std;


int main() 
{  
    int n,m;
    cin>>n>>m;
    // vector<vector<int>> vec(n,vector<int> (m,0));
    vector<string> vec;
    string s;
    for (int i = 0; i < n; i++)
    {
        cin>>s;
        vec.push_back(s);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(vec[i][j] == '.'){

                if((i+j)%2 == 0){
                    vec[i][j] = 'B';
                }
                else
                    vec[i][j] = 'W';



            }
        }
        
    }

    for(auto x:vec){
        for(auto y:x){
            cout<<y;
        }
        cout<<endl;
    }
    


}
