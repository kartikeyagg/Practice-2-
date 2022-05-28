#include <iostream>

using namespace std;

class Employee
{
private:
    int id;
    static int count;
    int salary;

public:
    void setData(void)
    {
        salary = 122; // intializing the salary
        cout << "Enter the id \n";
        cin >> id;
        count++; // as count is in the shared memory it updates the previous count
    }
    void getdata(void)
    {
        cout << "the id of the employee is ";
        cout << id << " and employee number is " << count << endl;
    }
    static void getcount(void)
    { //static funtion
        // cout<<id; //throws an error as this static function has access to only staic variables and functions
        cout << "the value of count is  " << count << endl;
    }
};

int Employee ::count; //default value is 0
int main()
{
    // Employee harry,rohan,lavish,shruti; // this type of declaration is not good for 1000s of employee
    //so we can use arrays of the objects of employee;
    Employee E1[4];
    for (int i = 0; i < 4; i++)
    {
        E1[i].setData();

        E1[i].getdata();
    }

    return 0;
}