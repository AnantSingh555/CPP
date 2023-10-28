#include<iostream>
#include<cstring>
using namespace std;
class CWH{
    protected:
        string title;
        float rating;
    public:
        CWH(string s, float r){
            title= s;
            rating = r;
        }
        virtual void display(){}
};
class CWHVideo : public CWH{
    float video_Length;
    public:
        CWHVideo(string s, float r, float vL): CWH(s,r){
            video_Length = vL;
        }
        void display(){
            cout<<"This is an amazing video with title "<<title<<endl;
            cout<<"Ratings :"<<rating<<" out of 5 stars "<<endl;
            cout<<"Length of this video is "<<video_Length<<" minutes"<<endl;

        }
}; 
class CWHText : public CWH{
    int words;
    public:
        CWHText(string s, float r, int wc): CWH(s,r){
            words = wc;
        }
        void display(){
            cout<<"This is an amazing text tutorial with title "<<title<<endl;
            cout<<"Ratings of this text tutorial is :"<<rating<<" out of 5 stars "<<endl;
            cout<<"Number of words in this text tutorial are "<<words<<" words"<<endl;

        }
}; 
int main(){
    string title;
    float rating, vlen;
    int words;

    //for code with harry video
    title = "Django tutorial";
    vlen = 4.56;
    rating = 4.89;
    CWHVideo djvideo(title, rating, vlen);
    djvideo.display();

    //for code with harry text
    title = "django tutorial";
    words = 45;
    rating = 4.93;
    CWHText djtext(title, rating, words);
    djtext.display();

    CWH* tuts[2];
    tuts[0]= &djvideo;
    tuts[1]= &djtext;
    tuts[0]->display();
    tuts[1]->display();

    return 0;
}