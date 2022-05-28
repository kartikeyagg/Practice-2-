#include<iostream>
#include<map>
#include<string>
using namespace std;
// map is an associative array

int main(){
    map<string, int> marksmap;
    marksmap["Harry"] = 91;
    marksmap["Rohan"] = 85;
    marksmap["Jack"] = 93;
    marksmap.insert({{"Akhil",65},{"Tushar",35}}); // another method of insertion
    map<string, int> :: iterator iter;
    for ( iter = marksmap.begin(); iter != marksmap.end(); iter++)
    {
        cout<<(*iter).first<<" "<<(*iter).second<<endl; // one can get key form *iter.first and value from *iter.second
        
    }

    


    return 0;
}