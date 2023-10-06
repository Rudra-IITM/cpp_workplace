#include<bits/stdc++.h>
using namespace std;

// first class
class A{
    public:
    int x=10;
};

// sec class
class B{
    public:
    int x=20;
};

// derived class 
class C: public A,public B{

};

// Diamond Problem :- If both parents have same method/data members accessing it 
// from child is ambigious (we use scope resoluttion to access such methods/data memebrs)

int main(){
    C obj;
    // using scope of A to access x 
    cout<<obj.A::x<<endl;

    // using acope of B to access x 
    cout<<obj.B::x<<endl;

    return 0;
}