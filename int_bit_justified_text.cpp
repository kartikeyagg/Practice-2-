#include<bits/stdc++.h>
using namespace std;
vector<string> fullJustify(vector<string> &A, int B) {

    vector<string> vs;
    if(A.size() ==1 && A[0] == ""){
        return A;
    }
    int n = A.size();
    vector<int> numspace = {0};

    int j =0;
    int i =0;

    string temp;
    vs.push_back("");

    while(j<n){
        
        if( (vs[vs.size()-1]).size() ==0){
            
            vs[vs.size()-1] = A[j];
            

        }

        else if( (vs[vs.size()-1]).size() +1 + A[j].size() <=B){
            vs[vs.size()-1] +=" " ;
            vs[vs.size()-1] +=A[j] ;
            numspace[numspace.size()-1] +=1;
        }

        else{
        vs.push_back("");
        numspace.push_back(0);
        j--;
        }


        j++;
    }
    cout<<"the num of spaces are"<<endl;

    for(auto x: numspace){
        cout<<x<<" ";
    }
    cout<<"\n";

    int rem =0,q =0;

    cout<<"size of vs is "<<vs.size()<<endl;

    for(i=0;i<numspace.size()-1;i++){

        cout<<"for i ="<<i<<endl;

        j  = B- ((vs[i]).size());
        cout<<"j is "<<j<<endl;
        if(numspace[i] !=0){
            q = j/numspace[i] ;
            rem = j%numspace[i];
            for (int k = 0; k < vs[i].size(); k++)
            {   
                if(vs[i][k] == ' '){
                    temp = "";
                    for (int tk = 0; tk < rem+q; tk++)
                    {
                        temp+=" ";
                    }
                    vs[i] = (vs[i].substr(0,k+1) ) +temp +(vs[i].substr(k+1,(vs[i]).size() -k-1 ));
                    k+=(rem+q);
                    rem = max(0,rem-1);
                }
                
            }
            
            }
        else{ // when single word is present
            for (int k = 0; k < j; k++)
            {
                vs[i] +=" ";
            }
            q= 0;
            rem =0;
            
        }

        cout<<q<<","<<rem<<"# ";
        cout<<endl;

    }
    { // last word
        j = B- ((vs[vs.size()-1]).size());
            for (int k = 0; k < j; k++)
            {
                vs[i] +=" ";
            }
            q= 0;
            rem =0;
            
        }

    return vs;


}

int main() 
{  
    vector<string> res= {"This", "is", "an", "example", "of", "text", "justification."};
    res = fullJustify(res,16);
    cout<<"\n";
    res[res.size()-1]+="/";
    for(auto x:res){
        cout<<x<<endl;
    }
    
    cout<<endl;
    return 0;
  }

// example  of text", 
// is  an",