#include<bits/stdc++.h>
using namespace std;


int solve(int i, vector<vector<int>> &vec){

    return vec[0][vec[1][5]]+vec[1][vec[0][5]]+vec[2][vec[3][5]]+vec[3][vec[2][5]]
    +vec[1][vec[2][5]]+vec[2][vec[1][5]]+vec[3][vec[4][5]]+vec[4][vec[3][5]]
    +vec[2][vec[3][5]]+vec[3][vec[2][5]] + vec[3][vec[4][5]]+vec[4][vec[3][5]];

}

int rec1(int i, vector<vector<int>> &vec){

    if(i == 5){
        
        return solve(i,vec);
    }

    int res =0;
    for (int ind = i; ind < 5; ind++)
    {
        swap(vec[i],vec[ind]);  
        res = max(res,rec1(i+1,vec));
        swap(vec[i],vec[ind]) ;     
    }
    return res;
}

int main() 
{  
    vector<vector<int>> vec(5,vector<int> (5,0));
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin>>vec[i][j];
        }
        vec[i].push_back(i);
        
    }
    // cout<<"#############"<<endl;
    // swap(vec[0],vec[1]);
    // for (int i = 0; i < 5; i++)
    // {
    //     for (int j = 0; j < 5; j++)
    //     {
    //         cout<<vec[i][j]<<" ";
    //     }
    //     cout<<endl;
        
    // }
    // cout<<"###########"<<endl;
    cout<<rec1(0,vec);
    // cout<<"res is "<<rec1(0,vec);
    
    cout<<endl;
    return 0;
  }
    // int k = vec[0][1] + vec[1][0]+vec[1][2]
    //     +vec[2][1]+2*vec[2][3]+2*(vec[3][2]+vec[3][4])
    //     + 2*vec[4][3];