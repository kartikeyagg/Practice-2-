#include <iostream>
#include <vector>
#include<array>
#include <algorithm>
using namespace std;


string largestNumber(const vector<int> &B) {
        vector<int> A = B;
        string s="";
        int cpk=0,temp=0;
        
        vector<int> t=A;
        int n = A.size();
        array<int,2> arr[n];
        int maxr=0,num_digit=0;
        sort(A.begin(),A.end());
        maxr = A[n-1];
        cout<<"maxr is "<<maxr<<endl;
        while(maxr>0){
            maxr = maxr/10;
            num_digit++;
        }
        cout<<"Num digits is "<<num_digit<<endl;
         
        int cur_dig=0;
        for(int i=0;i<n;i++){    
            cout<<"for "<<A[i]<<endl;
            cur_dig=0;        
            maxr = A[i];
            while(maxr>0){
                maxr = maxr/10;            
                cur_dig++;
        }
        cout<<"current no. of digit is "<<cur_dig<<endl;
        arr[i][1] = A[i];
        temp = A[i];
        while(temp>0){
        cpk = temp%10;
        temp = temp/10;
        }
        while(cur_dig<num_digit){
            A[i] =A[i]*10;
            A[i] +=cpk; 

            cur_dig++;
        }
        arr[i][0] = A[i];
        cout<<"corresponding val is "<<arr[i][0]<<endl;
        // cout<<"curretn number is "<<arr[i][1]<<endl;
        

        }

        sort(arr,arr+n);

        for(int i=n-1;i>=0;i--){
            cout<<"adding "<<arr[i][1]<<endl; 
            s = s+to_string(arr[i][1]);

        }
        

return s;}
         
int main() 
{  vector<int> a = { 782, 240, 409, 678, 940, 502, 113, 686, 6, 825, 366, 686, 877, 357, 261, 772, 798, 29, 337, 646, 868, 974, 675, 271, 791, 124, 363, 298, 470, 991, 709, 533, 872, 780, 735, 19, 930, 895, 799, 395, 905};

    cout<< largestNumber(a);
    
    
    cout<<endl;
    return 0;
  }