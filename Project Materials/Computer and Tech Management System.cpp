#include <fstream>
#include <iostream>
#include <typeinfo>
#include <set>
#include <iterator>
using namespace std;
#include <process.h>
#include <windows.h>

const int LEN = 32;
const int MAXEM = 1000;

enum computer_type {tgraphics, tprocessor,tmotherboard,tpowersupply,tmonitor,tram,tharddisk,tssd};

int total=0;

multiset<pair<int,int>>st;

class computer
{

private:
    char p_name[LEN];
    int p_quantity;
    int p_price;
    static int n;
    static computer* arrap[];
public:

    virtual void getdata()
    {
        cin.ignore(10, '\n');
        cout << "Enter product name: ";
        cin >> p_name;
        cout << " Enter product quantity : ";
        cin >> p_quantity;
        cout << " Enter product Price : ";
        cin >> p_price;

    }
    virtual void putdata()
    {
        cout << "\n Product Name: " << p_name;
        cout << "\n Product quantity: " << p_quantity;
        cout << "\n Product Price: " << p_price;
    }
    virtual computer_type get_type();
    static void add();
    static void read();
    static void write();
    static void display();
    static void display_graphics();
    static void display_processor();
    static void display_motherboard();
    static void display_powersupply();
    static void display_ram();
    static void display_ssd();
    static void display_moniter();
    static void display_harddisk();
    static void modify_price(int index,int n_price);
    static int calc(int index,int quantity);
    static void print_item();

};

int computer::n;

computer* computer::arrap[MAXEM];

class graphics : public computer
{

 private:
    int memory_gb;
 public:

    void getdata()
    {
        computer::getdata();
        cout << "Enter memory of graphics : ";
        cin >> memory_gb;
    }
    void putdata()
    {
        computer::putdata();
        cout << "\n memory: " << memory_gb;
    }
};


class processor : public computer
{
private:
    int core;
    float clock_speed;

public:
    void getdata()
    {
        computer::getdata();
        cout <<  "Enter core : ";
        cin >> core;
        cout <<  "Enter clock_speed : ";
        cin >> clock_speed;

    }
    void putdata()
    {
        computer::putdata();
        cout << "\nNumber of core: " << core;
        cout << "\n Clock_Speed: " << clock_speed;
        cout<<endl;
    }
};

class motherboard:public computer{

   private:

   public:

    void getdata()
    {
        computer::getdata();

    }
    void putdata()
    {
        computer::putdata();

    }

};

class ram:public computer{

   private:

   public:

    void getdata()
    {
        computer::getdata();

    }
    void putdata()
    {
        computer::putdata();

    }

};

class powersupply:public computer{

   private:

   public:

    void getdata()
    {
        computer::getdata();

    }
    void putdata()
    {
        computer::putdata();

    }

};
class harddisk:public computer{

   private:

   public:

    void getdata()
    {
        computer::getdata();

    }
    void putdata()
    {
        computer::putdata();

    }

};
class ssd:public computer{

   private:

   public:

    void getdata()
    {
        computer::getdata();

    }
    void putdata()
    {
        computer::putdata();

    }

};


class moniter:public computer{

   private:

   public:

    void getdata()
    {
        computer::getdata();

    }
    void putdata()
    {
        computer::putdata();

    }

};


void computer::add()
{
    char ch;
    cout <<"'1' to add a Graphics_Card"
         "\n'2' to add a Processor"
         "\n'3' to add a Motherboard"
         "\n'4' to add a Power_supply"
         "\n'5' to add a Ram"
         "\n'6' to add a Harddisk"
         "\n'7' to add a SSD"
         "\n'8' to add a Moniter"
         "\nEnter selection: ";
    cin >> ch;
    switch(ch)
    {

    case '1':
        arrap[n] = new graphics;
        break;
    case '2':
        arrap[n] = new processor;
        break;
    case '3':
        arrap[n]= new motherboard;
        break;
    case '4':
        arrap[n]= new powersupply;
        break;
    case '5':
        arrap[n]= new ram;
        break;
    case '6':
        arrap[n]= new harddisk;
        break;
    case '7':
        arrap[n]= new ssd;
        break;
    case '8':
        arrap[n]= new moniter;
        break;
    default:
        cout << "\nUnknown type\n";
        return;
    }
    arrap[n++]->getdata();
}

void computer::display()
{
    for(int j=0; j<n; j++)
    {
        cout << (j+1);
        switch( arrap[j]->get_type() )         {
        case tgraphics:
            cout << ". Type: Graphics ";
            break;
        case tprocessor:
            cout << ". Type: Processor ";
            break;
        case tmotherboard:
            cout<< " . Type: Motherboard";
            break;
        case tpowersupply:
            cout<< " . Type: Power_Supply";
            break;
        case tram:
            cout<< " . Type: Ram";
            break;
        case tharddisk:
            cout<< " . Type: Hard_Disk";
            break;
        case tssd:
            cout<< " . Type: SSD";
            break;
        case tmonitor:
            cout<< " . Type: Moniter";
            break;
        default:
            cout << ". Unknown type";
        }
        arrap[j]->putdata();
        cout << endl;
    }
}

void computer::display_graphics()
{
    for(int j=0; j<n; j++)
    {
        if(arrap[j]->get_type()==tgraphics){
            cout<<(j+1)<<" ";
            arrap[j]->putdata();
            cout << endl;
        }
        else
            continue;
    }

}
void computer::display_processor()
{
    for(int j=0; j<n; j++)
    {
        if(arrap[j]->get_type()==tprocessor){
            cout<<(j+1)<<" ";
            arrap[j]->putdata();
            cout << endl;
        }
        else
            continue;
    }

}
void computer::display_motherboard()
{
    for(int j=0; j<n; j++)
    {
        if(arrap[j]->get_type()==tmotherboard){
            cout<<(j+1)<<" ";
            arrap[j]->putdata();
            cout << endl;
        }
        else
            continue;
    }

}


void computer::display_powersupply()
{
    for(int j=0; j<n; j++)
    {
        if(arrap[j]->get_type()==tpowersupply){
            cout<<(j+1)<<" ";
            arrap[j]->putdata();
            cout << endl;
        }
        else
            continue;
    }

}


void computer::display_ram()
{
    for(int j=0; j<n; j++)
    {
        if(arrap[j]->get_type()==tram){
            cout<<(j+1)<<" ";
            arrap[j]->putdata();
            cout << endl;
        }
        else
            continue;
    }

}


void computer::display_ssd()
{
    for(int j=0; j<n; j++)
    {
        if(arrap[j]->get_type()==tssd){
            cout<<(j+1)<<" ";
            arrap[j]->putdata();
            cout << endl;
        }
        else
            continue;
    }

}


void computer::display_harddisk()
{
    for(int j=0; j<n; j++)
    {
        if(arrap[j]->get_type()==tharddisk){
            cout<<(j+1)<<" ";
            arrap[j]->putdata();
            cout << endl;
        }
        else
            continue;
    }

}


void computer::display_moniter()
{
    for(int j=0; j<n; j++)
    {
        if(arrap[j]->get_type()==tmonitor){
            cout<<(j+1)<<" ";
            arrap[j]->putdata();
            cout << endl;
        }
        else
            continue;
    }

}



computer_type computer::get_type()
{
    if( typeid(*this) == typeid(graphics) )
        return tgraphics;
    else if( typeid(*this)==typeid(processor) )
        return tprocessor;
    else if( typeid(*this)==typeid(motherboard) )
        return tmotherboard;
    else if( typeid(*this)==typeid(powersupply) )
        return tpowersupply;
    else if( typeid(*this)==typeid(harddisk) )
        return tharddisk;
    else if( typeid(*this)==typeid(ssd) )
        return tssd;
    else if( typeid(*this)==typeid(ram) )
        return tram;
    else if( typeid(*this)==typeid(moniter) )
        return tmonitor;
    else
    {
        cerr << "\nBad type";
        exit(1);
    }

}

void computer::write()
{
    int size;
    cout << "Enlisting " << n << " Components.\n";
    ofstream ouf;
    computer_type etype;

    ouf.open("Comp.txt", ios::binary);
    if(!ouf)
    {
        cout << "\nCan’t open file\n";
        return;
    }

    for(int j=0; j<n; j++)     {

        etype = arrap[j]->get_type();

        ouf.write( (char*)&etype, sizeof(etype) );
        switch(etype)
        {
        case tgraphics:
            size=sizeof(graphics);
            break;
        case tprocessor:
            size=sizeof(processor);
            break;
        case tmotherboard:
            size=sizeof(motherboard);
            break;
        case tpowersupply:
            size=sizeof(powersupply);
            break;
         case tharddisk:
            size=sizeof(harddisk);
            break;
        case tram:
            size=sizeof(ram);
            break;
        case tssd:
            size=sizeof(ssd);
            break;
        case tmonitor:
            size=sizeof(moniter);
            break;
        }
        ouf.write( (char*)(arrap[j]), size );
        if(!ouf)
        {
            cout << "\nCan’t write to file\n";
            return;
        }
    }
}




void computer::read()
{
    int size;
    computer_type etype;
    ifstream inf;

    inf.open("Comp.txt", ios::binary);
    if(!inf)
    {
        cout << "\nCan’t open file\n";
        return;
    }

    n = 0;

    while(true)
    {
        inf.read( (char*)&etype, sizeof(etype) );
        if( inf.eof() )
            break;
        if(!inf)
        {
            cout << "\nCan’t read type from file\n";
            return;
        }
        switch(etype)
        {

        case tgraphics:
            arrap[n] = new graphics;
            size=sizeof(graphics);
            break;
        case tprocessor:
            arrap[n] = new processor;
            size=sizeof(processor);
            break;
        case tmotherboard:
            arrap[n] = new motherboard;
            size=sizeof(motherboard);
            break;
        case tpowersupply:
            arrap[n] = new powersupply;
            size=sizeof(powersupply);
            break;
        case tharddisk:
            arrap[n] = new harddisk;
            size=sizeof(harddisk);
            break;
        case tram:
            arrap[n] = new ram;
            size=sizeof(ram);
            break;
        case tssd:
            arrap[n] = new ssd;
            size=sizeof(ssd);
            break;
        case tmonitor:
            arrap[n] = new moniter;
            size=sizeof(moniter);
            break;
        default:
            cout << "\nUnknown type in file\n";
            return;
        }
        inf.read( (char*)arrap[n], size );
        if(!inf)         {
            cout << "\nCan’t read data from file\n";
            return;
        }
        n++;
    }
    cout << "In stock: " << n << " sections of Components\n";
}

void computer::modify_price(int index ,int price)
{
     system("cls");
     arrap[index-1]->p_price=price;
     computer::write();

}

int computer::calc(int index,int quanity)
{
    int tot=0;

     if(arrap[index-1]->p_quantity >= quanity)
    {

      tot=(arrap[index-1]->p_price )*quanity;
      arrap[index-1]->p_quantity -=quanity;
    }

    return tot;
}

void computer::print_item()
{
    cout<<"PRODUCT"<<" "<<"price"<<" "<<"quantity"<<endl;
    int tot=0;

    for(auto x:st)
    {
        string name=arrap[x.first-1]->p_name;
        int price=arrap[x.first-1]->p_price;
        int quantity=x.second;
        tot+=price*quantity;

        cout<<name<<"   "<<price<<"    "<<quantity<<endl;
    }

    cout<<"Total money : "<<tot<<endl;

    st.clear();
}


int run()
{
    int x=1;

    int money=0;

    while(x!=0)
    {
       system("cls");
       computer::display();
       cout<<"Enter y/n to buy or exit"<<endl;
       char ch;
       cin>>ch;
       if(ch=='n')
       {
           x=0;
           break;
       }
       int a,b;
       cout<<"Enter product index ";
       cin>>a;
       cout<<"Enter product quantity ";
       cin>>b;

       int temp=computer::calc(a,b);

       if(temp)
       {
           st.insert({a,b});
           money+=temp;
       }
       else
       {
           cout<<"Quantity is not correct "<<endl;
       }

    }

    computer::write();

    return money;
}

namespace password{

     string cout="Manager37";
}

class customer{

 private:
     int pay=0;

 public:

   void show_all_products()
   {
       computer::display();
   }

   void show_all_graphics_card()
   {
       computer::display_graphics();
   }


   void show_all_motherboard()
   {
       computer::display_motherboard();
   }


   void show_all_powersupply()
   {
       computer::display_powersupply();
   }

   void show_all_processor()
   {
       computer::display_processor();
   }

   void show_all_harddisk()
   {
       computer::display_harddisk();
   }

   void show_all_ram()
   {
       computer::display_ram();
   }

   void show_all_ssd()
   {
       computer::display_ssd();
   }

    void show_all_monitor()
   {
       computer::display_moniter();
   }

   void buy_items()
   {
       pay=run();
   }

   class error{

     private:
        int need;

     public:
        error(int a):need(a){}

   };

   void buying_items()
   {
       computer::print_item();

       cout<<"Please pay the amount to buy the products"<<endl;

       cout<<"ENTER AMOUNT : ";
       int x;
       cin>>x;

       if(x<pay)
        throw error(pay-x);

       x-=pay;

       cout<<"Thank you sir, Your returned amount is : "<<x<<endl;

       pay=0;
   }


};

int main()
{

     cout<<"Welcome to Computer Hardware Store!"<<endl;

     cout<<endl;

     cout<<"1. Customers "<<endl; cout<<endl;

     cout<<"2. Manager "<<endl; cout<<endl;

     cout<<"ENTER SELECTION : ";
     char temp;
     cin>>temp;

     if(temp=='1')
     {
       system("cls");

       computer::read();

       char ch;

       customer c;


       while(true)
       {
        cout<<
             "\n'1' -- display data for all Components"
             "\n'2' -- display all graphics"
             "\n'3' -- display all processor"
             "\n'4' -- display all motherboard"
             "\n'5' -- display all Power_Supply"
             "\n'6' -- display all RAM  "
             "\n'7' -- display all SSD"
             "\n'8' -- display all Hard_Disk"
             "\n'9' -- display all Moniter"
             "\n'b' -- Buy products       "
             "\n'x' -- exit"
             "\nEnter selection: ";

             cin>>ch;

             system("cls");

             if(ch=='1')
             {
                 c.show_all_products();
             }
             else if(ch=='2')
             {
                 c.show_all_graphics_card();
             }
             else if(ch=='3')
             {
                 c.show_all_processor();
             }
             else if(ch=='4')
             {
                 c.show_all_motherboard();
             }
             else if(ch=='5')
             {
                 c.show_all_powersupply();
             }
             else if(ch=='6')
             {
                 c.show_all_ram();
             }
             else if(ch=='7')
             {
                 c.show_all_ssd();
             }
             else if(ch=='8')
             {
                 c.show_all_harddisk();
             }
             else if(ch=='9')
             {
                 c.show_all_monitor();
             }
             else if(ch=='b')
             {
                 try
                 {
                      c.buy_items();
                      system("cls");
                      c.buying_items();

                 }
                 catch(customer::error a)
                 {
                     cout<<"Less amount than total price"<<endl;
                     exit(1);
                 }
             }
             else if(ch=='x')
                exit(1);
             else
             {
                 cout<<"Unknow command"<<endl;
             }


       }


     }
     else if(temp=='2')
     {
         cout<<"Enter Password : ";
         string s;
         cin>>s;
         if(s!=password::cout){

             cout<<"Oops incorrect password"<<endl;
             exit(1);

         }


    char ch;
    system("cls");
    computer::read();

    while(true)
    {

        cout <<"'a' -- add data for any Components"
             "\n'1' -- display data for all Components"
             "\n'2' -- display all graphics"
             "\n'3' -- display all processor"
             "\n'4' -- display all motherboard"
             "\n'5' -- display all Power_Supply"
             "\n'6' -- display all RAM  "
             "\n'7' -- display all SSD"
             "\n'8' -- display all Hard_Disk"
             "\n'9' -- display all Moniter"
             "\n'w' -- Write              "
             "\n'm' -- modify price of a product"
             "\n'x' -- exit"
             "\nEnter selection: ";
        cin >> ch;
        system("cls");
        switch(ch)
        {
        case 'a':
            computer::add();
            computer::write();
            break;
        case '1':
            computer::display();
            break;
        case '2':
            computer::display_graphics();
            break;
        case '3':
            computer::display_processor();
            break;
        case '4':
            computer::display_motherboard();
            break;
        case '5':
            computer::display_powersupply();
            break;
        case '6':
            computer::display_ram();
            break;
        case '7':
            computer::display_ssd();
            break;
        case '8':
            computer::display_harddisk();
            break;
        case '9':
            computer::display_moniter();
            break;
         case 'w':
            computer::write();
            break;
        case 'm':
            int a,b;
            computer::display();
            cout<<"THE INDEX OF THE PRODUCT : ";
            cin>>a;
            cout<<"THE NEW PRICE OF THE PRODUCT : ";
            cin>>b;
            computer::modify_price(a,b);
            break;
        case 'x':
            exit(0);
        default:
            cout << "\nUnknown command";
        }
    }



     }


    return 0;
}

