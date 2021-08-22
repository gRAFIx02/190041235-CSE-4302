#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

class Alpha
{
private:
    int data;
    Alpha(Alpha &a);
    void operator = (Alpha &a);
public:
    Alpha()
    {

    }
    Alpha(int d): data(d)
    {

    }
    void display()
    {
        cout<<data<<'\n';
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
