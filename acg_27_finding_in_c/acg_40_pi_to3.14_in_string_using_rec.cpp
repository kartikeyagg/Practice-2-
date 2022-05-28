#include <iostream>
#include <string>
using namespace std;
//given a string replace 3.14 wherever pi occurs in string
string replacepi(string str){
    if(str.size()<=1){
        return str;
    }
    if(str[0]=='p'){
        if(str[1] == 'i'){
            return "3.14"+replacepi(str.substr(2));
        }
        else if(str[1]!='i'){
            return "p"+replacepi(str.substr(1));
        }
    }
    else{
        return str[0]+replacepi(str.substr(1));
    }
    
}

int main() 
{   string str = "pippxxpiixipi";   
    
    str= replacepi(str);
    cout<<"\nthe string is "<<str<<endl;
    
    cout<<endl;
    return 0;
  }