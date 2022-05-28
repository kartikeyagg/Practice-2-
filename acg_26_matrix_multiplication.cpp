#include <iostream>
#include <vector>
using namespace std;
  // multiplication of two matrices m1 and m2
int main() 
{   int n1,n2,n3;

    int m1[n1][n2];
    int m2[n2][n3];
    int m3[n1][n3];

    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; i < n3; j++)
        {
            for (int k = 0; k < n2; k++)
            {
                m3[i][j] = m1[i][k]*m2[k][j];
            }
            
        }
        
    }
    //m3 is desired matrix

    

  
    cout<<endl;
    return 0;
  }