
// #include<bits/stdc++.h>
// using namespace std;

// #define vvi vector<vector<int>>
// #define vvs vector<vector<string>>

// #define v1 vector<int> 
// string tk="";
// string sk ="";
// string LCS1(int i,int j , string &A, string &B , vvs &mem){

//     if(mem[i][j]!= "#TY90"){
//         cout<<i<<" "<<j<<" 1 \n";
//         return mem[i][j];
//     }

//     if(A[i] =='\0' || B[j] == '\0'){
//         cout<<i<<" "<<j<<" 2 \n";

//         mem[i][j]  ="";
//         return "";
//     }
//     tk="";
//     sk ="";
//     if( A[i] == B[j]){
//         tk = LCS1(i+1,j+1,A,B,mem) + A[i];
//         mem[i][j]= tk;
//         cout<<i<<" "<<j<<" 3 \n";

//         return (tk);
//     }
//     // tk = max(LCS1(i+1,j,A,B,mem),LCS1(i,j+1,A,B,mem));

//     tk = LCS1(i+1,j,A,B,mem);
//     sk = LCS1(i,j+1,A,B,mem);
//     // if(tk == "#TY90"){cout<<"fas\n";tk = "" ;}
//     // if(sk == "#TY90"){cout<<"fas1\n";sk = "" ;}

//     if(tk.size()>sk.size()){

//         cout<<i<<" "<<j<<" 4 \n";

//         mem[i][j] = tk;
//         return tk;
//     }
//     else if (tk.size()<sk.size()){
//         cout<<i<<" "<<j<<" 5 \n";
//         mem[i][j] = sk;
//         return sk;
//     }
//     else{
//     //     if(j<i){
//     //         return sk;
//     //     }
//     //     else {
//     //         return tk;
//     //     }
//     // }
//     cout<<i<<" "<<j<<" 6 \n";
//     cout<<"tk = "<<tk<<"sk ="<<sk<<endl;
//     return sk;
//     }
// } 

  
// int main() 
// {  
//     string a = "fasdfda";
//     string b = "fasfdasf";

//     a = "abbfadsf";
//     b = "bbafasdf";

//     vvs mem (a.size()+1,vector<string> (b.size()+1,"#TY90"));

//     string res = LCS1(0,0,a,b,mem);

//     reverse(res.begin(),res.end());

//     for (int i = 0; i < mem.size(); i++)
//     {
//         for (int j = 0; j < mem[0].size(); j++)
//         {
//             // if(mem[i][j] =="#TY90" ){cout <<"  ";}
//             // else if (mem[i][j] ==""){cout<<"1 ";}
//             // else
//             cout<<i<<j<<mem[i][j]<<" ";
//         }
//         cout<<endl;
//     }
    

//     cout<<"\n result is "<<res<<endl;

//     mem.clear();

    
//     cout<<endl;
//     return 0;
//   }


// // if(a[a.size()] == '\0'){
// //     cout<<"hellow \n";
// // }

// // cout<<a[a.size()]<<endl;

#include<bits/stdc++.h>
using namespace std;

#define vvi vector<vector<int>>

#define v1 vector<int> 

int LCS1(int i,int j , string &A, string &B , vvi &mem){

    if(mem[i][j]!=-1){
        return mem[i][j];
    }

    if(A[i] =='\0' || B[j] == '\0'){
        mem[i][j]  =0;
        return 0;
    }
    int tk;
    if( A[i] == B[j]){
        tk = 1+ LCS1(i+1,j+1,A,B,mem);
        mem[i][j]= tk;
        return (tk);
    }
    tk = max(LCS1(i+1,j,A,B,mem),LCS1(i,j+1,A,B,mem));
    mem[i][j] = tk;
    return tk;
} 

  
int main() 
{  
    string a = "fasdfda";
    string b = "fasfdasf";

    vvi mem (a.size()+1,v1 (b.size()+1,-1));

    int res = LCS1(0,0,a,b,mem);

    for (int i = 0; i < mem.size(); i++)
    {
        for (int j = 0; j < mem[0].size(); j++)
        {
            cout<<mem[i][j]<<" ";
        }
        cout<<endl;
    }
    

    cout<<"\n result is "<<res<<endl;


    
    cout<<endl;
    return 0;
  }

