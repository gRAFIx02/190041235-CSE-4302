#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

class Alpha
{
private:
    int data;
public:
    Alpha()
    {

    }
    Alpha(int d): data(d)
    {

    }
    Alpha(Alpha &a)     ///copy constructor
    {
        data = a.data;
        cout<<"Using copy constructor\n";
    }
    void display()
    {
        cout<<data<<'\n';
    }
    void operator = (Alpha &a)      ///assignment operator
    {
        data = a.data;
        cout<<"Using overloaded assignment operator\n";
    }
};

int main()
{
    Alpha a1(10);
    Alpha a2;
    a2 = a1;
    a2.display();
    Alpha a3(a2);
    a3.display();
}
