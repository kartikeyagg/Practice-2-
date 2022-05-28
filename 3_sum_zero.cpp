#include<bits/stdc++.h>
using namespace std;

set<vector<int>> st;

vector<vector<int>> point2(vector<int> &vec,int i,int n,int target1){

    vector<vector<int>> res = {};
    vector<int> t = {};
    vector<int> ut = {};
    int j= 0,k = n-1;
    int temp;

    while(k-j >1){
        t.clear();
        temp = vec[k]+vec[j];
        if( temp== target1){
            ut = {vec[k],vec[j],vec[i]};
            sort(ut.begin(),ut.end());
            st.insert(ut);
            t.push_back(vec[k]);
            t.push_back(vec[j]);
            res.push_back(t);
            k--;
            if(k ==i) k--;
            j++;
            if (j ==i) j++;
            while(j<n && vec[j] == vec[j-1]){
                j++;
            }
        }
        if(temp <target1){
            j++;
            if(j ==i) j++;
        }
        else if(temp>target1){
            k--;
            if(k ==i) k--;
        }
        else{
            j++;
            if(j ==i) j++;
        }
    }
return res;

}


vector<vector<int> > threeSum1(vector<int> &A) {
    st.clear();
    int n = A.size(),i,j;
    vector<vector<int> > vi;
    vector<vector<int> > res;
    int prev = -INT_MAX;
    if(n<3){return vi;}
    sort(A.begin(),A.end());
    for(int i=0;i<n-2;i++){

        if(A[i] == prev){
            // i++;
            continue;
        }

        if(A[i] +A[1]+ A[0] >0 || A[i]+A[n-1]+A[n-2]<0 ){
            continue;
        }
        vi = point2(A,i,n,0-A[i]);

        if(vi.size()!=0){
            cout<<" fadsfsad ";
            for(auto x: vi){
                cout<<A[i]<<" ";
                x.push_back(A[i]);
                res.push_back(x);
            }
            cout<<endl;
        }


    prev = A[i];
    }

    return res;
    
}

  
int main() 
{  
    vector<int> A = {1, -4, 0, 0, 5, -5, 1, 0, -2, 4, -4, 1, -1, -4, 3, 4, -1, -1, -3};
    vector<vector<int>> res = threeSum1(A);

    for(auto x: res){
        for(auto y:x){
            cout<<y<<" ";
        }
        cout<<endl;
    }
    cout<<"size of res is "<<res.size()<<endl;
    cout<<"########\nset\n########\n";
    for(auto it = st.begin();it!=st.end();it++){
        for(auto x: *it){
            cout<<x<<" ";
        }
        cout<<endl;
    }
    cout<<"size of st is "<<st.size()<<endl;
    
    
    cout<<endl;
    return 0;
  }