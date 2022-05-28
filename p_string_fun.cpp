#include<iostream>
#include<string>
using namespace std;

int main(){
    string a = "I am the best";
    cout<<a.size()<<endl; 
    cout<<a.length()<<endl;
    cout<<a.max_size()<<endl; // maximum lenght of character this string can store
    a.erase(a.begin()+5);
    // a.push_back(a[0]);
    cout<<a<<endl;
    cout<<a.back()<<endl;
    cout<<a.size();
    

    cout<<endl;
    return 0;
//     o/p:-
// 13
// 13
// 9223372036854775807
// I am he best
// t
// 12
}
/*
{
    string sr="";
    for(int i= 0;i<s.size();i++){
        if(s[i]==' '){
            s.erase(s.begin()+i);
        }}
        int k = s.size();
        int r,c;
        r = pow(k,1/2); 
        if(k!=1 && k!=4 && k!=9 && k!=16 && k!=25 && k!=36 && k!=49 && k!=64 && k!=81)
        {c = r+1;}
        else{
            c=r;
        }
       sr.push_back(s[0]);
       for(int i= 1;i<=s.size();i++){
           if((i+1)%c == 0){
               sr.push_back(" ");
           }
           sr.push_back(s[i]);
           
       } 
       return sr;
}*/
