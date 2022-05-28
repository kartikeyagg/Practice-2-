
#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<int,int> a, pair<int,int> b){
    return a.first<b.first;
}
bool hotel(vector<int> &arrive, vector<int> &depart, int C) {

    int n = arrive.size();
    if(n <2){return 1;}
    vector<pair<int,int>> vec(n);
    for (int i=0;i<n;i++){
        vec[i] = make_pair(arrive[i],depart[i]);
    }
    sort(vec.begin(),vec.end(),cmp);
    // int last_day = *max_element(depart.begin(),depart.end());

    cout<<"sorted acc to arrival date is "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<vec[i].first<<" ";
    }
    cout<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<vec[i].second<<" ";
    }    cout<<"\n";

    int max_day =0;
    int count_guest =0,current_guest =0;
    
    for(int i =0;i<n-1;i++){
        if(vec[i+1].first>=vec[i].second){ //change here use vec instead of arrive and dep
            cout<<"conti for i = "<<i<<endl;
            continue;
        }
        for(int j= vec[i].first;j<vec[i].second;j++){
            if( j<max_day){
                continue;
            }
            // current_guest = j
            max_day = j;
            count_guest =1;
            cout<<"for j = "<<j<<endl;
            for(int k =i+1;k<n;k++){
                if(vec[k].first<=j ){
                    if( vec[k].second>j)
                        {count_guest++;
                        cout<<"cout_guest is "<<count_guest<<endl;
                        if(count_guest>C) {cout<<"lim reached"<<endl;return 0;}
                    }
                }
                else{
                    break;
                }
            }

        }
    }
return 1;

}


int main() 
{   
    // vector<int> emp = {};
    // vector<vector<int> > hel(5,emp);
    vector<int> ar = {11, 24, 36, 15, 16, 23, 20, 19};
    vector<int> dp = {14, 32, 67, 25, 21, 54, 61, 34};
    int c =4;
    auto res = hotel(ar,dp,c);
    cout<<"\nres is "<<res<<endl;
    
    
    cout<<endl;
    return 0;
  }