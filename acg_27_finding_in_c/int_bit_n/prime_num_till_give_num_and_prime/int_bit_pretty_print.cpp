#include <iostream>
#include <vector>
using namespace std;
  
int main() 
{  
    int A = 4;

    int n = (A*2)-1;
    int x =A;

    vector<vector<int> > vec( n , vector<int> (n,0));
        for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        
        cout<<vec[i][j]<<" ";
    }
    cout<<endl;
    }
    cout<<endl;
    cout<<endl;
    cout<<endl;

    for(int i=0;i<n;i++){
        for(int j=i;j<n-i;j++){
            vec[i][j] = A;
            vec[n-1-i][j] = A;
            vec[j][i] = A;
            vec[j][n-i-1] = A;



        }
        A--;



    }
    for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cout<<vec[i][j]<<" ";
    }
    cout<<endl;
    }

    
    cout<<endl;
    return 0;
  }