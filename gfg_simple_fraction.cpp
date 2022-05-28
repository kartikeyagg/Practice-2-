#include<bits/stdc++.h>
using namespace std;
string fractiontodecimal(int num,int denom){

    int q=1,r=1;
    int temp=0;
    int i=0,j=0;
    string res,tk;
    // res+= to_string()
    r = num;
    while(r!=0 && i<10){
        while(r<denom && i!=0){
            r = r*10;
            // if(i!=1)
            res+='0';
        }
        num = r;
        temp  = num/denom;
        res+=to_string(temp);
        if(i==0 && num%denom!=0){res+='.';}
        else{
            tk+=to_string(temp);
        }
        r = (num%denom)*10;
        i++;



        
    }
    return res;
}
int main() 
{  
    int num = 9;
    int den = 3;
    string res  = fractiontodecimal(num,den);
    cout<<"Answer is "<<res<<endl;
    cout<<endl;
    return 0;
  }
    //   string res,temp;

    // int i(0),j(0),res(0);
    // string res,after_dec;
    // while(num<denom){
    //     num = num*10;
    //     j++;
    // }
    

    // double num1 = num,denom1 = denom;
    // temp = (to_string(num1/denom1));

    // for( i=0;i<temp.size();i++){
    //     if(temp[i]=='.'){

    //     }
    // }


    // return res;