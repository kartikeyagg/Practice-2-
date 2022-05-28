#include<iostream>
#include<cstring>
using namespace std;
class cwh{
    protected:
        char title[30];
        float rating;
    public:
        cwh(char *s,float r){
            strcpy(title,s);
            rating = r;
        }
        /*virtual*/ void display(){
            cout<<"In the base"<<endl;

        }
} ;

class cwh_video: public cwh{
    int videolenght;
    public:
        cwh_video(char *s, float r , int vl): cwh(s,r){
            videolenght = vl;

        }
        void display(){
            cout<<"the video has title "<<title<<endl;
            cout<<"the video has rating "<<rating<<endl;
            cout<<"the length of video is "<<videolenght<<" minutes"<<endl;

        }

};

class cwh_words: public cwh{
    int words;
    public:
        cwh_words(char *s, float r , int wl): cwh(s,r){
            words = wl;    
            
        }
        void display(){
            cout<<"the text tutoiral has title "<<title<<endl;
            cout<<"the text tutoiral has rating "<<rating<<endl;
            cout<<"the text lenght  is "<<words<<" words"<<endl;

        }

};


int main(){
    char title[30] = "Django Tutoial";
    float rating, vlen;
    int words;
    // for code  with harry video
    // title  = "Django tutorial";
    vlen = 4.56;
    rating  = 4.89;
    words = 554;
    cwh_video djvideo(title,rating,vlen) ;
    // djvideo.display();
    cwh_words djtext(title,rating,words);
    // djtext.display();

    cwh * tut[2];
    tut[0] = &djvideo;
    tut[1]  = &djtext;

    tut[0]->display();
    tut[1]->display(); // if the display of the base class is virtual then
    //the display of the derived class will be called otherwise 
    //display of base class will be called
    // as the pointer type is of  base class
    return 0;
}