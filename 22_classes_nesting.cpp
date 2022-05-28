#include<iostream>
#include<string>
using namespace std;
class binary{
    string s;
    public :
        void read(void);
        void chk_bin(void);
        void ones(void);
        void display(void);

};

void binary :: read(void){
    cout<<"Enter a binary Number"<<endl;
    cin>>s;

}
void binary :: chk_bin(void){
    for( int i = 0; i < s.length(); i++)
    {
        if(s.at(i)!='0' && s.at(i)!='1'){
            cout<<"Incorrect binary format"<<endl;
            exit(0);
                    }      
    }
    
}
void binary :: ones(void){
    chk_bin(); // function nesting is implemented here
    for( int i = 0; i < s.length(); i++)
    {
        if(s.at(i)=='0'){
            s.at(i) = '1';
                    }    
        else if (s.at(i)=='1' ) {
             s.at(i) = '0';
        } 
    }
   

}
void binary :: display(void){
    cout<<"Displaying the binary numbers"<<endl;
    for( int i = 0; i < s.length(); i++)
    {
        cout<<s.at(i);      
    }
    cout<<endl;
    
}

int main(){
    binary b;
    b.read();
    // b.chk_bin(); // we can call it directly inside the function like display
    //and that is called function nesting
    b.display();
    b.ones();
    cout<<"After the one's compliment "<<endl;
    b.display();
    return 0;
}