///Lab 13

#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

namespace my_namespace
{
    int sum(int a, int b)
    {
        return a+b;
    }
}

int sum(int a, int b)
{
    return a+b;
}

int main()
{
    int a = 10, b = 20;
    cout<<sum(a, b)<<'\n';
    cout<<my_namespace::sum(a, b);
}
