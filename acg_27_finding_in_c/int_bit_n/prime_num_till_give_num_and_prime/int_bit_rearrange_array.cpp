#include <iostream>
#include <vector>
using namespace std;
  
int main() 
{   
    vector<int> A ={4,0,2,1,3};
    int i=0,n=A.size();
    for ( i = 0; i < n; i++)
    {
        A[i] +=  (A[A[i]]%n)*n;
    }

    for (int i = 0; i < n; i++)
    {
        cout<<A[i]/n<<" "<<endl;
    }
    return 0;
}
    






    
//     int i=0,count =0;int cx =0;
//     int t = A[i],m=0;
//     A[i] = -A[A[i]]-(2+A.size()) ;
//     for ( i = 0; i < A.size(); i++)
//     {
//         if(A[i] == i){
//             cx++;

//         }
//     }
    
//     while(count<A.size()-1-cx){
//         cout<<"t :- "<<t<<endl;
//         cout<<"m :- "<<m<<endl;


//         for(i=0;i<A.size();i++){
//             if(A[i]==m){
//                 break;
//             }
//         }
//         cout<<"changing "<<A[i]<<" with index "<<i<<" to "<<t<<endl; 

//         A[i] = t;
//         t = m;
//         m = i;
//         // A[i] = A[A[i]];
//         count++;


//     }

//     A[0] = -1*A[0];
//     A[0]-=2+A.size();
//     for ( i = 0; i < A.size(); i++)
//     {
//         cout<<A[i]<<" ";
//     }
      
//     cout<<endl;
//     return 0;
//   }