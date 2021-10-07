///Lab 13

#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

int main()
{
    int odd[10] = {1, 3, 5, 7, 9};
    int even[10] = {2, 4, 6, 8, 10};
    vector<int>v(10);

    merge(odd, odd+5, even, even+5, v.begin());

    for(int i=0; i<v.size(); i++)
        cout<<v[i]<<" ";
}
