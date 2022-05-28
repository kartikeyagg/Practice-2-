#include<bits/stdc++.h>
using namespace std;
#define vi vector<int> 
vector<int> res123;

bool cmp1(pair<int,int> &a, pair<int,int> &b){

    return a.first <b.first;

}
int array_3p(vi &a,vi &b, vi &c){

    int na = a.size();
    int nb = b.size();
    int nc = c.size();
    int i = 0,j =0,k=0;
    vector<int> titer = {i,j,k};
    vector<int> vsize = {na,nb,nc};
    vector<pair<int,int>> cur;
    int maxt = INT_MIN;
    int mint = INT_MAX;
    int count1 =0;
    while(titer[0]<na && titer[1]<nb && titer[2]<nc){
        cur.clear();maxt = INT_MIN;
        // mint = INT_MAX;
        cur = {{a[titer[0]],0},{b[titer[1]],1},{c[titer[2]],2}};
        sort(cur.begin(),cur.end(),cmp1);

        for(auto x:cur){
            int tk = x.second;
            // cout<<"tk is "<<tk<<endl;
            // count1=0;
            if(titer[tk] <vsize[tk]-1)
            {
                titer[tk]++;
                break;
            }
        }
        maxt = max(maxt,abs(a[titer[0]]-b[titer[1]]));
        maxt = max(maxt,abs(a[titer[0]]-c[titer[2]]));
        maxt = max(maxt,abs(c[titer[2]]-b[titer[1]]));
        // mint= min(mint,maxt);

        if(maxt < mint){
            mint = maxt;
            res123 = {a[titer[0]],b[titer[1]],c[titer[2]]};
        }

        if (titer[0] == vsize[0]-1 && titer[1] == vsize[1]-1 && titer[2] == vsize[2]-1){
            break;
        }

        }
    return mint;
}


  
int main() 
{  
    vector<int> a = {20,24,100};
    vector<int> b = { 2,19,22,79,800 };

    vector<int> c = {10,12,23,24,119};

    int res = array_3p(a,b,c);

    cout<<" \nres is "<<res<<endl;
    
    
    cout<<endl;

    cout<<"the elements are"<<endl;
    for(auto x: res123){
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
  }