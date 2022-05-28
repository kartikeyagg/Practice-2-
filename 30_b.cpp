#include<iostream>
#include<math.h>
 using namespace std;

class point {

    int x,y;
    public:
        friend void dist(point,point);
        point(int a=0, int b=0){
            x = a;
            y  = b;
        }
        void printpoint(void){
            cout<<"The point is "<<x<<","<<y<<endl;
        }
};
void dist(point px,point py){ //friend funtion to calculate distance btw two points
    cout<<px.x<<" "<<px.y<<" "<<py.x<<" "<<py.y<<endl;
    double t = 0;
    t = pow(( pow(px.x -py.x,2) + pow(px.y -py.y,2)),0.5);
    cout<<t<<endl;
    cout<<"The distance btw given two points is "<<t<<endl;


}
 int main(){
     point p1(7,4);
     p1.printpoint();
     point p2(6,9);
     p2.printpoint();
     dist(p1,p2);

     return 0;
 }