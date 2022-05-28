#include <iostream>
#include <vector>

using namespace std;

long long int gridtravel(vector<vector<long long int>> &v, int r, int c)
{   int t;
    cout<<"in the grid of "<<r<<"x"<<c<<endl;
    if (r == 1 && c == 1)
    {
        return 1;
    }
    else if (r == 0 || c == 0)
    {
        return 0;
    }
    if (v[r][c] != -1){
        return v[r][c];
    }
    cout<<"Going to another grid"<<endl;
    t = gridtravel(v,r-1,c) + gridtravel(v,r,c-1) ;
    v[r][c] = t;
    return t;
}
int main()
{
    int r, c;
    long long int x=0;
    cout << "Enter the number of rows then colums" << endl;
    cin >> r;
    cin >> c;
    // vector<vector<int>> v;
    vector<vector<long long int>> v(r+1, vector<long long int> (c+1, -1));//intializing every element with 0
    // for (int i = 0; i <= r; i++)
    // {
    //     for (int j = 0; j <= c; j++)
    //     {
    //         v[i][j] = -1;
    //     }
    // }
    cout<<"vector intialised"<<endl;
    x = gridtravel(v,r,c);
    cout<<" Total no. of ways of traveling this grid is "<<x<<endl;
    return 0;
}