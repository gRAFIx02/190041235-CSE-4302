#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

class Base
{
public:
    virtual void show()
    {
        cout<<"Base\n";
    }
};

//class Base
//{
//public:
//    virtual void show() = 0;
//};
//
//class Derv1 : public Base
//{
//public:
//    void show()
//    {
//        cout<<"Derived class 1\n";
//    }
//};

class Derv2 : public Base
{
public:
    void show()
    {
        cout<<"Derived class 2\n";
    }
};

int main()
{
    Base b;
    b.show();
    Base *bp;
    bp = new Derv1;
    bp->show();
    bp = new Derv2;
    bp->show();
}
