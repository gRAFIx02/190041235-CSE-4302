///Lab 11

#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

enum dept_type {d_cse, d_eee, d_mce};

class Dept
{
private:
    string dept_name;
    int dept_id;
    ll budget;
    static Dept *d[];
public:
    virtual void getdata()
    {
        cout << "Enter department name: ";
        cin >> dept_name;
        cout << "Enter department ID: ";
        cin >> dept_id;
        cout<<"Enter budget: ";
        cin>>budget;
    }
    virtual void putdata()
    {
        cout << "Department Name: " << dept_name<<'\n';
        cout << "Department ID: " << dept_id<<'\n';
        cout<<"Department Budget: "<<budget<<'\n';
    }
    virtual dept_type get_type();
    void display();
    static void read();
    static void write();
};

Dept *Dept::d[100];

class CSE : public Dept
{
public:
    void getdata()
    {
        Dept::getdata();
    }
    void putdata()
    {
        Dept::putdata();
    }
};

class EEE : public Dept
{
public:
    void getdata()
    {
        Dept::getdata();
    }
    void putdata()
    {
        Dept::putdata();
    }
};

class MCE : public Dept
{
public:
    void getdata()
    {
        Dept::getdata();
    }
    void putdata()
    {
        Dept::putdata();
    }
};

dept_type Dept::get_type()
{
    if( typeid(*this) == typeid(CSE) )
        return d_cse;
    else if( typeid(*this)==typeid(EEE) )
        return d_eee;
    else if( typeid(*this)==typeid(MCE) )
        return d_mce;
    else
    {
        cout << "Bad department type\n";
        exit(1);
    }
}

void Dept::write()
{
    int size;
    dept_type dtype;
    ofstream output("department.txt", ios::binary | ios::app);
    if(!output)
    {
        cout<<"Can't open file\n";
        exit(1);
    }
}

void employee::read()
{

}

int main()
{

}
