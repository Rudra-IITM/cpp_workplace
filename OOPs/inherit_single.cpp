#include<bits/stdc++.h>
using namespace std;

// parent/base class
class story{
    int pages;
    string genre;
    public:
    string author;

    // ctor (constructor) using initialistaion list 
    story():pages(0),genre("not-defined"),author("not-defined"){};

    // normal ctor
    story(int pages,string genre,string author){
        this->pages=pages;
        this->genre=genre;
        this->author=author;
    }

    // copy ctor
    story (story* &obj){
        this->pages=obj->pages;
        this->genre=obj->genre;
    }

    void doc(){
        cout<<"This is a story\n";
    }

    // dtor (destructor)
    ~story(){
        cout<<"dtor called for object\n";
    }
};

// child/derived class (an example of single inheritence)
class short_story:public story{
    public:
    void _doc(){
        cout<<"It is a short story\n";
    }
};

int main(){
    short_story seven_hells;
    seven_hells._doc();
    seven_hells.doc();

    return 0;
}