#include<bits/stdc++.h>
using namespace std;

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

    // dtor (destructor)
    ~story(){
        cout<<"dtor called for object\n";
    }
};

int main(){
    story* harry_potter=new story(512,"Fantasy","JK Rowling");

    // if we are creating a ptr (pointer) of class then we need to 
    // access its data members and member funcs using -> op (operator)

    cout<<harry_potter->author<<endl;

    story h_p=story(harry_potter); //using copy ctor

    // if we create an instance in heap memory (ptrs) we need to deallocte memory_order 
    // (we need to call dtor manually) else it will result in memory flow (leak)
    delete harry_potter;

    story jungle_book(1020,"Adventure","Kipling");
    // if we create any instance of class then we can 
    // access its data members and member funcs using . (dot) op (operator)

    cout<<jungle_book.author<<endl;

    return 0;
}