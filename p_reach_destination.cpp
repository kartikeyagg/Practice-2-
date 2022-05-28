#include<iostream>

using namespace std;

int rdest(int sx,int sy,int dx,int dy){
    int res =0;
    if(dx==sx && dy==sy){
        return 1;
    }
    else if (dx<sx || dy<sy){
        return 0;
    }
    res = (rdest(sx+sy,sy,dx,dy)||rdest(sx,sy+sx,dx,dy));


return res;}

int main(){
    int r;
   int sx=1;
    int sy=1;
   int  dx=1;
   int dy=1;
   r= rdest(sx,sy,dx,dy);
   cout<<r;

    cout<<endl;
    return 0;
}