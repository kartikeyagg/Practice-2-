#include <iostream>
#include <vector>
#include<string>
#include<algorithm>
using namespace std; // convert from lower case to upper case
  
int main() 
{  
    string str = "afqWknCakTyu";
    cout<<'a'-'A'<<endl; // op :- 32
    //convert to upper case
    for (int i = 0; i < str.size(); i++)
    {
        if(str.at(i)>='a'&&str.at(i)<='z')
        {
            str[i] -=32;
        }
    }
    cout<<"to upper case \n";
    cout<<str<<endl; 
    //   now convert t lower case
    for (int i = 0; i < str.size(); i++)
    {
         if(str.at(i)>='A'&&str.at(i)<='Z')
        {
            str[i] +=32;
        }
    }
    cout<<"to lower case \n";
    cout<<str<<endl;

    cout<<endl;
    return 0;
  }