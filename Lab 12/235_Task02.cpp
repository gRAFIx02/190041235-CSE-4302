///Lab 12

#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

template<class T>

T amax(T *a, int n)
{
    T MAX = a[0];
    for(int i=1; i<n-1; i++)
    {
        if(a[i]>MAX)
            MAX = a[i];
    }
    return MAX;
}

int main()
{
    int a[10] = {2, 4, 1, 6, 9, 10, 8, 3, 5, 7};
    cout<<amax(a, 10)<<'\n';

    char s[20] = "I am a boy";
    cout<<amax(s, strlen(s)+1)<<'\n';

    double d[10] = {5.5, 7.8, 3.2, 9.9, 4.1};
    cout<<amax(d, 5)<<'\n';
}
