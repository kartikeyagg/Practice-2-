#include<bits/stdc++.h>
using namespace std;
string stringLower(string &upTxt)
{
	for (int i = 0; i < upTxt.length(); i++)
  	{
  		if(upTxt[i] >= 'A' && upTxt[i] <= 'Z')
  		{
  			upTxt[i] = upTxt[i] + 32;
		}
  	}
  	return upTxt;
}
string stringUpper(string &upTxt)
{
	for (int i = 0; i < upTxt.length(); i++)
  	{
  		if(upTxt[i] >= 'a' && upTxt[i] <= 'z')
  		{
  			upTxt[i] = upTxt[i] - 32;
		}
  	}
  	return upTxt;
}
bool counter_a(string &s){ // return 1 when count of lower case is greteer 
// than that of upper case
 
    int n = s.size();
    int count1 = 0; // count of small alphabets
    for(auto x:s){
        if(x>96){
            count1++;
        }
    }
    // if(count1 > (n-1)/2 )
    if(n%2 == 0){
        if(count1>=n/2){
            return 1;
        }
    }
    if(n%2 == 1){
        if(count1> n/2){
            return 1;
        }
    }

return 0;
}
  
int main() 
{  
    string s;
    cin>>s;
    if(counter_a(s)){

       cout<<stringLower(s)<<endl;
        
    }
    else{
        cout<<stringUpper(s)<<endl;
    }

    
    cout<<endl;
    return 0;
  }