#include <iostream>
#include <string>
using namespace std;
class Employee
{
private:
    int id;
    static int count; //declaring static variable with a step also after the class (line 28)
    //static variable is also known as class variable
    //static variable can't be initialized here but at the below step of the static variable declaration

public:
    void setData(void)
    {
        cout << "Enter the id \n";
        cin >> id;
        count++; // as count is in the shared memory it updates the previous count
    }
    void getdata(void)
    {
        cout << "the id of the employee is ";
        cout << id << " and employee number is " << count << endl;
    }
    static void getcount(void){ //static funtion
        // cout<<id; //throws an error as this static function has access to only staic variables and functions
        cout<<"the value of count is  "<<count<<endl;
}
};

int Employee ::count; //default value is 0

int main()
{
    Employee harry, lavish, yash;
    harry.setData();
    harry.getdata();
    harry.getcount();

    lavish.setData();
    lavish.getdata();
    harry.getcount(); // even i called harry here the output would be same
    //as it is using a static variable

    yash.setData();
    yash.getdata();
    yash.getcount();


    return 0;
}