#include <iostream>
#include <vector> // number of record breaking days;
using namespace std;

int main()
{
    vector<int> a = {1,2,0,7,2,0,2,2};//{2, 3, 6, 9, 5, 7, 9};
    int max = -19999, i = 0,counter=0;
    for(i=0;i<a.size();i++){
            if(a[i]>max){
                max = a[i];
                if(i==a.size()-1){
                    counter++;
                }
                else if(a[i]>a[i+1]){
                    counter++;
                }
            }
            

    }
    cout<<"the number of record breaking days is "<<counter;

    cout << endl;
    return 0;
    //https://www.youtube.com/watch?v=eJcBH0xvG98&list=PLfqMhTWNBTe0b2nM6JHVCnAkhQRGiZMSJ&index=23
}