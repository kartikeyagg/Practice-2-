#include <iostream>
#include <vector>
#include <array>
#include <algorithm>
using namespace std;
  
int main() 
{  array<int, 2> a[5] ;

a[0][1] = 4;
a[0][0] = 94;

// sort( a, a + 5 );

  for (int i = 0; i < 1; i++)
  {
    cout<<a[i][0]<<" "<<a[i][1]<<endl;
    
  }
  
    
    
    cout<<endl;
    return 0;
  }