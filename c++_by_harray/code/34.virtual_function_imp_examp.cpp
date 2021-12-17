#include <iostream>
#include <cstring>
using namespace std;

class CWH
{
protected:
    string title;
    float rating;

public:
    CWH(string s, float r)
    {
        title = s;
        rating = r;
    }
    virtual void display()
    {
        cout << "base wala chal raha hai";
    }
};
class CHW_Video : public CWH
{
    float video_length;

public:
    CHW_Video(string s, float r, float vl) : CWH(s, r)
    {
        video_length = vl;
    }
    void display()
    {
        cout << "this is an amazing video tutorial with title " << title << endl;
        cout << "Rating " << rating << " out of 5 stars" << endl;
        cout << "length of video is " << video_length << " minutes " << endl;
    }
};

class CWH_Text : public CWH
{
    int words;

public:
    CWH_Text(string s, float r, int wc) : CWH(s, r)
    {
        words = wc;
    }
    void display()
    {
        cout<<"this is an amzing text tutorial with title "<<title<<endl;
        cout<<"rating of the text tutorial "<<rating<<" out of 5 stars"<<endl;
        cout<<"number of wirds counts in this tutorial is 0"<<words<<endl;
    }
};
int main()
{
    string title;
    float rating, vl;
    int words;

    title = "c++ tutorial video  by saurabh and harry ";
    vl = 10.77;
    rating = 4.5;
    CHW_Video djvideo(title, rating, vl);
    // djvideo.display();

    cout << endl;

    title = "c++ tutorial  text by  saurabh and harry ";
    words = 600;
    rating = 3.5;
    CWH_Text djtext(title, rating, words);
    // djtext.display();

    CWH *teacher[2];
    teacher[0] = &djvideo;
    teacher[1] = &djtext;

    teacher[0]->display();
    cout << endl;
    teacher[1]->display();
}