#include <string>
#include <iostream>
using namespace std;

class shop
{

    int itemId[100];
    int itemprice[100];
    int counter;

public:
    void intitcouter(void)
    {
        counter = 0;
    }
    void DisplayPrice(void);
    void setPrice(void);
};

void shop ::setPrice(void)
{
    cout << "enter id of your itemn no " << counter + 1 << endl;
    cin >> itemId[counter];
    cout << "enter price of your item" << endl;
    cin >> itemprice[counter];
    counter++;
}
void shop ::DisplayPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "the price of item with id " << itemId[i] << " is " << itemprice[i] << endl;
    
    }
}

int main()
{
    shop s1;
    s1.intitcouter();
    s1.setPrice();
    s1.setPrice();
    s1.setPrice();
    s1.DisplayPrice();

    return 0;
}