#include<bits/stdc++.h>
using namespace std;


string fun1(int a){
    
}

void fun2(int n){
    vector<int> re;
    vector<int> qu;
    string s = "";

    int temp;
    char c;
    cout<<"n are \n";
    while(n>0){
        cout<<n<<" ";
        temp  =n%26;
        if(temp ==0){
            temp =26 ;
            n-=26;
        }
        re.push_back(temp);
        n = n/26;
        c = temp+'@';
        s = s+c;
    }
    cout<<endl;
    

    for(auto x:re){
        cout<<x<<" ";
    }
    cout<<endl;
    reverse(s.begin(),s.end());
    cout<<s<<endl;


}

int main() 
{  
    
    fun2(943566);
    cout<<endl;
    return 0;
  }