#include <iostream>
#include <vector>
using namespace std;

string xatend(string str){

    if(str.length()==0){
        return "";
    }
    
    if(str[0]=='x'){
        str = xatend(str.substr(1))+'x';
    }
    else{
        str = str[0]+ xatend(str.substr(1));
    }

    return str;

}

int main() 
{   string str = "fakljxkjxjiojxxwgx";  
    
    str = xatend(str);
    cout<<str;
    
    cout<<endl;
    return 0;
  }