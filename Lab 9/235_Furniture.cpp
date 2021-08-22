#include<bits/stdc++.h>
#include<time.h>
using namespace std;
#define endl '\n'
#define ll long long

class Furniture
{
protected:
    string product_name;
    float price;
    string material;
    int total_products;
public:
    float discounted_price;
    virtual void product_details() = 0;
    virtual void store_info() = 0;
};

class Bed : public Furniture
{
private:
    string bed_size;
public:
    Bed()
    {

    }
    void store_info()
    {
        cout<<"Enter product name: ";
        cin>>product_name;
        cout<<"Enter bed size: ";
        cin>>bed_size;
        cout<<"Enter material: ";
        cin>>material;
        cout<<"Enter bed price: ";
        cin>>price;
    }
    void product_details()
    {
        srand(time(0));
        discounted_price = price-(rand()%100);
        cout<<"Product name: "<<product_name<<"\n";
        cout<<"Regular price: "<<price<<"\n";
        cout<<"Discounted price: "<<discounted_price<<"\n";
        cout<<"Material: "<<material<<"\n";
        cout<<"Bed size: "<<bed_size<<"\n";
    }
};

class Sofa : public Furniture
{
private:
    int seat_no;
public:
    Sofa()
    {

    }
    void store_info()
    {
        cout<<"Enter product name: ";
        cin>>product_name;
        cout<<"Enter number of seats: ";
        cin>>seat_no;
        cout<<"Enter material: ";
        cin>>material;
        cout<<"Enter price: ";
        cin>>price;
    }
    void product_details()
    {
        srand(time(0));
        discounted_price = price-(rand()%100);
        cout<<"Product name: "<<product_name<<"\n";
        cout<<"Regular price: "<<price<<"\n";
        cout<<"Discounted price: "<<discounted_price<<"\n";
        cout<<"Material: "<<material<<"\n";
        cout<<"Number of seats: "<<seat_no<<"\n";
    }
};

class DiningTable :  public Furniture
{
private:
    int chair_count;
public:
    DinningTable()
    {

    }
    void store_info()
    {
        cout<<"Enter product name: ";
        cin>>product_name;
        cout<<"Enter number of chairs: ";
        cin>>chair_count;
        cout<<"Enter material: ";
        cin>>material;
        cout<<"Enter price: ";
        cin>>price;
    }
    void product_details()
    {
        srand(time(0));
        discounted_price = price-(rand()%100);
        cout<<"Product name: "<<product_name<<"\n";
        cout<<"Regular price: "<<price<<"\n";
        cout<<"Discounted price: "<<discounted_price<<"\n";
        cout<<"Material: "<<material<<"\n";
        cout<<"Chair Count: "<<chair_count<<"\n";
    }
};

void sort_furniture_price(Furniture **fp, int n)
{
    for(int a=0; a<n-1; a++)
    {
        for(int b=a+1; b<n; b++)
        {
            if(fp[a]->discounted_price<fp[b]->discounted_price)
                swap(fp[a], fp[b]);
        }
    }
}

int main()
{
    int c, n, i=0;
    Furniture *f[1000];
    while(1)
    {
        cout<<"1. Store Info\n2. View Info\n3. Sort Price\n4. Exit\n";
        cout<<"Enter choice: ";
        cin>>c;
        cout<<"\n";
        if(c==1)
        {
            cout<<"1. Bed\n2. Sofa\n3. Dining Table\n";
            cout<<"Enter choice: ";
            cin>>n;
            cout<<"\n";
            if(n==1)
            {
                f[i] = new Bed;
                f[i]->store_info();
                i++;
            }
            else if(n==2)
            {
                f[i] = new Sofa;
                f[i]->store_info();
                i++;
            }
            else
            {
                f[i] = new DiningTable;
                f[i]->store_info();
                i++;
            }
            cout<<"\n";
        }
        else if(c==2)
        {
            cout<<"All furniture info: \n";
            for(int j=0; j<i; j++)
            {
                f[j]->product_details();
                cout<<"\n";
            }
        }
        else if(c==3)
        {
            sort_furniture_price(f, i);
            for(int j=0; j<i; j++)
            {
                f[j]->product_details();
                cout<<"\n";
            }
        }
        else
            return 0;
    }
}
