#include<iostream>
using namespace std;
class shopitem{
    int id;
    float price;
    public :
        void setdata(int a, float b){
            id =a;
            price =b;

        }
        void getdata(void){
            cout<<"Item code is "<<id<<endl;
            cout<<"Price of this item is "<<price<<endl;
        }

};
int main(){
    int size = 3;
    shopitem *ptr = new shopitem[size];
    shopitem *ptr1 = ptr;
    int p;float q;
    /*
    let there be 3 shop item 
    1.) general store item
    2.) veggie item
    3.) hardware item
    */
    for (int i = 0; i < size; i++)
    {
       cout<<"Enter the Id and Price of item "<<i+1<<" ";
       cin>>p>>q;
       ptr->setdata(p,q);
       ptr++;

    }
    cout<<"Getting the data"<<endl;
    for (int i = 0; i < size; i++)
    {  
        cout<<"Item number: "<<i+1<<endl;
        ptr1->getdata();
        ptr1++;
        
    }
    
    

     return 0;
}