///Lab 12

#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

const int LIMIT = 10;
template <class T>

class safearay
{
private:
    T arr[LIMIT];
public:
    class OutofBound
    {

    };
    T& operator [](int n)
    {
        if( n< 0 || n>=LIMIT )
            throw OutofBound();
        return arr[n];
    }
};

int main()
{
    try
    {
        safearay<int> sa1;
        for(int j=0; j<LIMIT; j++)
            sa1[j] = j*10;
        for(int j=0; j<LIMIT; j++)
        {
            int temp = sa1[j];
            cout << "Element "<< j << " is " << temp << '\n';
        }
    }
    catch(safearay<int>::OutofBound)
    {
        cout<<"Index out of bound. Index limit: "<<LIMIT<<'\n';
    }

    cout<<'\n';
    try
    {
        int n = 20;
        safearay<char> sa2;
        for(int j=0; j<n; j++)
            sa2[j] = 'a'+j;
        for(int j=0; j<n; j++)
        {
            char temp = sa2[j];
            cout << "Element "<< j << " is " << temp << '\n';
        }
    }
    catch(safearay<char>::OutofBound)
    {
        cout<<"Index out of bound. Entered value: "<<n<<"Index limit: "<<LIMIT<<'\n';
    }
    return 0;
}
