#include<iostream>
#include<list>
using namespace std;


void display(list<int> &l1){
    list<int> :: iterator it;
    for ( it = l1.begin(); it != l1.end(); it++)
    {
        cout<<(*it)<<" ";
    }
cout<<endl;}

int main(){ 
    list<int> list1; // list of 0 lenght
    list<int> list2(3); // Empty list of size 3 intial value of elements =0

    list1.push_back(5);
    list1.push_back(7);
    list1.push_back(1);
    list1.push_back(1);
    list1.push_back(13);
    // list<int> :: iterator iter; // instead of this a function display() is made
    // iter = list1.begin();
    // cout<<*iter<<" ";
    // iter++;
    // cout<<*iter<<" ";
    display(list1);
    // list1.pop_back(); //important // o/p = 5 7 1 1
    // list1.pop_front(); // o/p = 7 1 1 13 //additional features not in vector
    // list1.remove(1); //o/p = 5 7 13
    // list1.sort(); // sorts the whole list in ascending order
    display(list1);


    display(list2); // o/p = 0 0 0 
    list<int> :: iterator iter; 
    iter = list2.begin();
    *iter = 35;
    iter++;
    *iter = 15;
    iter++;
    *iter = 23;
    iter++;
    display(list2); // o/p = 35 15 23
    // list1.merge(list2);// extends list1 with list 2 at the end
    list1.reverse();
    display(list1);  
    cout<<list1.empty(); // if container is empty it returns 1 otherwise 0
       
    cout<<endl;
    return 0;
}