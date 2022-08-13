#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
 
int n,m,x,y,k,s1,s2,a[20000],t,u;
 
int main()
{
    char ch;
    cin>>n>>m>>k;
    int l=n*m;
    for (int i=1;i<=l;++i)
    {
        cin>>x;
        u=x%k;
        a[i]=x/k;
        if (i==1) t=u;
        else
        {
            if (u!=t)
            {
                puts("-1");
                return 0;
            }
        }
    }
    sort(a+1,a+l+1);
    x=l/2;y=(l+1)/2;
    for (int i=1;i<=l;++i)
    {
        s1+=abs(a[i]-a[x]);
        s2+=abs(a[i]-a[y]);
    }
    if (s1>s2) s1=s2;
    cout<<s1<<endl;
    return 0;
}
 