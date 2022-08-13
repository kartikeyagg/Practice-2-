#include<bits/stdc++.h>
using namespace std;

// vector<int> line1(int x1 ,int y1 , int x2 ,int y2){
    
//     int m,c;
//     m = (y2-y1)/(x2-x1);
//     c = y1-(m*x1);
    
//     return {m,c};
    
// }

int maxPoints(vector<int> &A, vector<int> &B) {
    
    int n = A.size();
    float m,c;
    float x1,x2,y1,y2;
    map<float, map<float,int>> mp;
    set<pair<int,int>> st;
    set<pair<int,int>> tks;
    for(int i =0;i<n-1;i++){
        // //cout<<"for i="<<i<<endl;
        x1 = A[i];
        y1 = B[i];
        for(int j =i+1;j<n;j++){
            // //cout<<"for j="<<j<<endl;
            x2 = A[j];
            y2 = B[j];
            //cout<<" for x1="<<x1<<", y1="<<y1<<", x2="<<x2<<", y2="<<y2<<endl;
            // //cout<<"fasdf fa \n";
            // finding m and c
            if(y2 == y1 && x2==x1){
                m=1;
                // //cout<<"rt\n";
            }
            else if(x2 - x1 == 0){
                m = 1003;
                c = 1003;
                // //cout<<" tk2\n";
            }
            else{
                m = (y2-y1)/(x2-x1);
                // //cout<<" el23"<<endl;
            }
            // //cout<<"32po \n";
            if(m!=1003){
            c = y1-(m*x1);}

            m = floor(m * 10.0) / 10.0;
            c = floor(c * 10.0) / 10.0;

            //cout<<"m and c are "<<m<<" "<<c<<endl;
            if(tks.find({m,c}) != tks.end()){
                //cout<<"already counted"<<endl;
                continue;
            }
            // //cout<<"fasdas \n";
            if(mp.find(m) == mp.end()){ // m not found
                mp[m] = {{c,2}};
            }
            else{
                
                if((mp[m]).find(c) == (mp[m]).end()) { //m found , c not found
                
                    (mp[m])[c] =2;
                    
                }
                else{
                    (mp[m])[c]+=1;
                }
                
            }
            st.insert(make_pair(m,c));
        }
        for(auto f:st){
            tks.insert(f);
            }
        st.clear();
    } // ending of the entering loops
    // //cout<<"loop end \n";
    long long maxres= INT_MIN,temp1;
    
    for(auto x: mp){
        cout<<"#####  m is "<<x.first<<endl;
        for(auto y: x.second){ // x.second is another map
        temp1 = y.second;
        maxres = max(maxres,temp1);
        cout<<y.first<<":"<<y.second<<endl;
        
        }
    }
    return (maxres);
    
}
    
 

  
int main() 
{  
    vector<int> vi = {1,1,1}; //x
    vector<int> bi = {0,4,-1}; //y 
    int n,k,t;
    cin>>n;
    vi.clear();
    bi.clear();
    for (int i = 0; i < n; i++)
    {
        cin>>k>>t;
        vi.push_back(k);
        bi.push_back(t);
    }
    
    int res = maxPoints(vi,bi);

    cout<<"answer is "<<res<<endl;

    
    
    //cout<<endl;
    return 0;
  }