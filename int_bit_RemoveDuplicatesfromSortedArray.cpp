#include <iostream>
#include <vector>
using namespace std;
void display(vector<int> A){
    for (int i = 0; i < A.size(); i++)
    {
        cout<<A[i]<<" ";
    }
    cout<<endl;
    cout<<"later lenght is "<<A.size()<<endl;
}
  
int main() 
{  
    
    vector<int> A = {0,1,2,2,3,4,5,5,5,8,9};
    cout<<"original lenght is "<<A.size()<<endl;
    A.erase(A.begin()+4,A.begin()+3);

    display(A);    
    cout<<endl;
    return 0;
  }