#include <iostream>
#include <vector>
using namespace std;

void permutaitonst(string s,string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }

    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        string ros = s.substr(0,i)+s.substr(i+1);

        permutaitonst(ros,ans+ch);
    
    }
    

}
  
int main() 
{  
    permutaitonst("ABC","");
    
    
    cout<<endl;
    return 0;
  }