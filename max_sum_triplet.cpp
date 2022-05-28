#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
// the approach will be to use a suffix array which contain
// the highest number on right for each element
// next we will form a set as we loop through the array and add the elements
// in set in ascending order
// now for each element we have to find the just smaller element on the left
// and highest element in the suffix array

int max_trip_sum(vi &a){

    int n = (a).size();

    vi suf(n,0);

    int max_t = -10e7;

    for (int i = n-1; i >= 0  ; i--)
    {
        if(a[i]>max_t){
            max_t = a[i];
        }
        suf[i] = max_t;
    }
    // cout<<"printing suffix array\n";
    // for(auto bk:suf){
    //     cout<<bk<<" ";
    // }
    cout<<endl;
    set <int> tk;
    tk.insert(a[0]);
    int ls = -10e7,rs;
    int max_trip = -10e7;
    for (int  i = 1; i < n-1; i++)
    {  
        //  ls = -10e7;
        tk.insert(a[i]);

        auto it  = tk.find(a[i]);
        
        if(it == tk.begin()){
            // ls = -10e7;
        }
        else{
             ls = *(--it);
             rs = suf[i+1];

             max_trip = max(ls+rs+a[i],max_trip);

        }


    }
    if(max_trip == -10e7) return 0;

    return max_trip;
}


  
int main() 
{ 
    // vi a={2, 5, 3, 1, 4, 9} ;
    vi a={18468, 6335, 26501, 19170, 15725, 11479, 29359, 26963, 24465, 5706, 28146, 23282, 16828, 9962, 492, 2996, 11943, 4828, 5437, 32392, 14605} ;
    
    int res = max_trip_sum(a);
    cout<<"res is "<<endl;
    cout<<res<<endl;


    // set<int> tk;

    // for(auto t:a){
    //     tk.insert(t);
    // }

    // auto it1 = tk.find(1);

    // if(it1 == tk.begin()){
    //     cout<<"first element \n";
    // }

    // // cout<<*(--it1)<<endl;
    cout<<endl;
    return 0;
  }