#include<iostream>
#include<vector>
// #include<algorithm>

using namespace std;

int main(){
    int n;
    cout<<"Enter the value of size n"<<endl;
    cin >> n;
    int current =0,maxtillnow = 0;
    vector<int> a;
    int b =0;
    cout<<"Enter the array \n";
    for (int i = 0; i < n; i++){
        cin>>b;
        a.push_back(b);
        cout<<endl;
    }    
    for (int i = 0; i < n; i++)
    { 
        current = current + a[i];
        maxtillnow = max(maxtillnow,current);  
        if (current<0){
            current = 0;
        }

    }
    cout<<"max sum of an subarray is "<<maxtillnow<<endl;
    

    return 0;
}