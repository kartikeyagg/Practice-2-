#include <iostream>
#include <vector>
using namespace std;
// the rows and colums are sorted in this array;
// need to find the target elemenet in it
int main() 
{   int target =20; // 13;
    int arr[4][4] = {{1,4,7,8},
                        {2,5,9,12},
                        {3,6,9,16},
                        {10,13,14,17}};
   
    int i=0,j=3;
    while (i!=4 && j!=-1)
    {
        if(arr[i][j] == target){
            cout<<"Found at "<<i<<" "<<j<<endl;
            return 0;
        }
        else if(arr[i][j]<target){
            i++;
        }
        else{
            j--;
        }
    }  
                          
    cout<<"\nNot found \n";
    cout<<endl;
    return 0;
  }