#include<bits/stdc++.h>
using namespace std;

class math{
    int val;
    public:
    math(): val(0){};
    math(int _val): val(_val){};

    int sum(int a,int b){
        return a+b;
    }

    // func overloading of sum....arguments must be diff from prev function
    int sum(int a,int b,int c){
        return a+b+c;
    }

    // operator overloading of + to perform subtraction
    void operator + (math &obj){
        cout<<(this->val)-(obj.val)<<endl;
        // return (this->val)-(obj->val);
    }

};

int main(){
    math obj1(5);
    math obj2(10);

    cout<<obj1.sum(2,4)<<endl;
    cout<<obj1.sum(2,4,9)<<endl;
    obj1+obj2;

    return 0;
}