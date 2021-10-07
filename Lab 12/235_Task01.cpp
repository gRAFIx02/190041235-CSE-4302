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
    T& operator [](int n)
    {
        if( n< 0 || n>=LIMIT )
        {
            cout << "\nIndex out of bounds";
            exit(1);
        }
        return arr[n];
    }
};

int main()
{
    safearay<int> sa1;
    for(int j=0; j<LIMIT; j++)
        sa1[j] = j*10;
    for(int j=0; j<LIMIT; j++)
    {
        int temp = sa1[j];
        cout << "Element "<< j << " is " << temp << '\n';
    }

    cout<<'\n';

    safearay<char> sa2;
    for(int j=0; j<LIMIT; j++)
        sa1[j] = 'a'+j;
    for(int j=0; j<LIMIT; j++)
    {
        char temp = sa1[j];
        cout << "Element "<< j << " is " << temp << '\n';
    }
    return 0;
}
