#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

class S
{
private:
    char *s;
    friend class String1;
    friend class String2;
public:
    S(char *str)
    {
        int l = strlen(str);
        s = new char[l+1];
        strcpy(s, str);
    }
    ~S()
    {
        delete[] s;
    }
};

class String1
{
private:
    S *sp;
public:
    String1()
    {
        sp = new S("NULL");
    }
    String1(char *str)
    {
        sp= new S(str);
    }
    ~String1()
    {
        delete sp;
    }
    void display()
    {
        cout<<sp->s<<'\n';
    }
};

class String2
{
private:
    S *sp;
public:
    String2()
    {
        sp = new S("NULL");
    }
    String2(char *str)
    {
        sp = new S(str);
    }
    String2(String2 &st)
    {
        sp = st.sp;
    }
    ~String2()
    {
        delete sp;
    }
    void display()
    {
        cout<<sp->s<<" "<<sp<<'\n';
    }
    String2& operator = (String2 &st)
    {
        sp = st.sp;
        return *this;
    }
};

int main()
{
    String1 s1("The quick brown fox jumps over the lazy dog.");
    String1 s2, s3;
    s1.display();
    s1 = s2 = s3;
    s2.display();
    s3.display();
//    String2 s4("The quick brown fox jumps over the lazy dog.");
//    s4.display();
//    String2 s5;
//    s5 = s4;
//    s5.display();
//    String2 s6(s5);
//    s6.display();
}
