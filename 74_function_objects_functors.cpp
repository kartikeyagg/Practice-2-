#include<iostream>
#include<functional>
#include<algorithm> // for sort
using namespace std;

int main(){
    // Fundtion Objects : function wrapped in a class so that it is available like an object
    int arr[]  = {11,36,4,1,5,7};
    // sort(arr,arr+5); //s sorts in ascending order but 7 will be unctouched as +5 is here but the lenght is 6
    sort(arr,arr+6); // sorts in ascending order
    sort(arr,arr+6,greater<int>()); // sorts in descending order
    for (int i = 0; i < 6; i++) // greter<int> is a function object or functors
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    // more functors  at https://en.cppreference.com/w/cpp/utility/functional
    return 0;
}