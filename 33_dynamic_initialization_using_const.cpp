#include<iostream>
using namespace std;
class bankdeposit{
    int principal;
    int years;
    float interestrate,returnvalue;

    public:
        //constructor overloading :-
        bankdeposit(){} // this is very important as without it we can not even make an object like line 45;
        bankdeposit(int p, int y, float r); //r can be value like 0.04
        bankdeposit(int p, int y, int r);//r can be like 14 (percentage)
         //notice that though the no. of arg is same but type of 3rd argunment is diff
        void show();

}; 
bankdeposit :: bankdeposit(int p , int y , float r){
    principal = p;
    years = y;
    interestrate = r;
    returnvalue  =principal;
    for (int i = 0; i < years; i++)
    {
        returnvalue  = returnvalue*(1+r);
    }
}
bankdeposit :: bankdeposit(int p , int y , int r){ //R
    principal = p;
    years = y;
    interestrate = float(r)/100;
    returnvalue  =principal;
    for (int i = 0; i < years; i++)
    {
        returnvalue  = returnvalue*(1+interestrate);
    }
}
void bankdeposit :: show(){
    cout<<endl<<"Principal amount was "<<principal
    << ". Return value after "<<years
    <<" years is "<<returnvalue<<endl;
}


int main(){
    bankdeposit bd1,bd2,bd3;
    int p,y;
    float r;
    int R;
    cout<<"enter the value of p y and r"<<endl;
    cin>>p>>y>>r;
    bd1 = bankdeposit(p,y,r);
    bd1.show();
    cout<<"enter the value of p y and R"<<endl;
    cin>>p>>y>>R;
    bd2 = bankdeposit(p,y,R);
    bd2.show();

    return 0;
}