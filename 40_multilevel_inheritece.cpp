#include<iostream>
using namespace std;

class student{ 
    protected :
        int roll_number;
    public:
        void set_roll_number(int);
        void get_roll_number(void);
};
void student :: set_roll_number(int r){
    roll_number = r;
}
void student :: get_roll_number(void){

    cout<<"The roll no is "<<roll_number<<endl;
}
class exam : public student{ // it has protected members as protected and public members as public of above(student) class
    protected:
        float maths;
        float physics;
    public:
        void set_marks(float,float);
        void get_marks(void);
};
void exam ::set_marks(float a , float b){
    maths = a;
    physics = b;

} 
void exam ::get_marks(){
    cout<<"the marks of maths are "<<maths<<" and of physics are "<<physics<<endl;
}
//now this class has protected members:- 
// roll number,maths,physics
// and public members :- 
// set_roll_number
//get_roll_numer
//get_marks
//set_marks and all the other members declared below
class result:public exam{ //multilevel inheritace 
    float percentage;
    public:
        void display_results(){
            cout<<"Your percentage is "<<(maths+physics)/2<<"%"<<endl;
        }   
};
int main(){ 

    result harry;
    harry.set_roll_number(420);
    harry.set_marks(94.0,90.0);
    harry.display_results();



    return 0;
}