#include<iostream>//virtual base class
using namespace std;
/*
student --> test
student --> sports
test --> result
sports--> result
*/
class student{
protected:
int rollno;
public:
    void set_number(int a){
            rollno = a;

    }
    void printnum(void){
        cout<<"the roll number is "<<rollno<<endl;
    }
} ;

class test: virtual public student{ // we prevent ambiguity of duplicate variables in result class by the use of virtual base class
    protected:
        float maths , physics;
        public:
            void setmarks(float m1,float m2){
                maths  = m1;
                physics  =m2;
            }
            void print_marks(void){
                cout<<"Your result is here: "
                << " Maths: "<<maths
                << " physics: "<<physics;
            }

};

class sports : virtual public student{
    protected:
        float score;
    public:
        void set_score(float sc){
            score  =sc;
        }
        void print_score(void){
            cout<<" Your pt score is "<<score<<endl;
        }
};
class result: public test, public sports{ //result would have 2 duplicate variable of rollno as it is inheriting from sports and
   // test ; but we resolved this ambiguity using virtual base class
    private :
        float total;
    public :
        void display(void){
            total  = maths + physics+score;
            printnum();
            print_marks();
            print_score();
            cout<<"Your total score is :"<<total<<endl;
        }

};
int main(){
    result harry;
    harry.set_number(4200);
    harry.setmarks(78.9,92.5);
    harry.set_score(9);
    harry.display();
    return 0;
}