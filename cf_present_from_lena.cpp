// #include<bits/stdc++.h>
// using namespace std;
  
// int main() 
// {   
//     // string g = "          ";
//     // cout<<"size of g is "<<g.size()<<endl;return 0;
//     int n;
//     cin>>n;
//     int t;
//     for (int i = 0; i <= n; i++)
//     // for(int i = n-1;i>=0;i--)
//     {
//         t = 2*i +1;
//         // print spaces now
//         for (int j = 0; j < n-i; j++)
//         {
//             cout<<"  ";
//         }
//         for (int k = 0; k <=i; k++)
//         {
//             cout<<k<<" ";
//         }
//         int flag =0;
//         for (int k = i-1; k >=0; k--)
//         {   
//             if (flag == 0){ flag =1;cout<<k;}
//             else cout<<" "<<k;
//         }
        
//         // for (int j = 0; j < n-i; j++)
//         // {
//         //     cout<<" ";
//         // }
//         cout<<endl;
//     }
//     // 
//     for(int i = n-1;i>=0;i--)
//     {
//         t = 2*i +1;
//         // print spaces now
//         for (int j = 0; j < n-i; j++)
//         {
//             cout<<"  ";
//         }
//         for (int k = 0; k <=i; k++)
//         {
//             cout<<k<<" ";
//         }
//         int flag =0;
//         for (int k = i-1; k >=0; k--)
//         {   
//             // if (flag == 0){ flag =1;cout<<k;}
//             cout<<k<<" ";
//         }
        
//         // for (int j = 0; j < n-i; j++)
//         // {
//         //     cout<<" ";
//         // }
//         cout<<endl;
//     }
    

//     cout<<endl;
//     return 0;
//   }

//4027858   Jul 5, 2013 8:37:21 PM	fuwutu	 118B - Present from Lena	 GNU C++0x	Accepted	 15 ms	 0 KB
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int row = -n; row <= n; ++row)
    {
        int top = n - abs(row);
        for (int i = 0; i < abs(row); ++i)
        {
            cout << "  ";
        }
        for (int i = 0; i < top; ++i)
        {
            cout << i << " ";
        }
        for (int i = top; i > 0; --i)
        {
            cout << i << " ";
        }
        cout << 0 << endl;
    }
    return 0;
}