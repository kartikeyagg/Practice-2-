#include <iostream>
using namespace std;
class complex
{
    int a, b;

public:
    complex(int x , int y)
    { // --> this is a parameterized constructor as it takes no argunements

        a = x;
        b = y;
    }
    complex(int x )
    { // --> this is a parameterized constructor as it takes no argunements
        a = x;
        b = 56;
    }

    void printnumber()
    {
        cout << "your number is " << a << " + " << b << "i" << endl;
    }
};

int main()
{
    complex c1(4);
    complex c2(34,75);
    c1.printnumber();
    c2.printnumber();
    return 0;
}