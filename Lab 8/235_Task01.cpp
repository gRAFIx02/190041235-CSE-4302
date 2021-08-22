#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

class Shape
{
protected:
    double length, breadth, height, radius, side1, side2, side3;
    const double pi = acos(-1.0);
public:
    Shape(): length(0), breadth(0), height(0), radius(0), side1(0), side2(0), side3(0)
    {
        cout<<"A shape is formed\n";
    }
    void getLength()
    {
        cout<<"Enter length: ";
        cin>>length;
    }
    void getBreadth()
    {
        cout<<"Enter breadth: ";
        cin>>breadth;
    }
    void getHeight()
    {
        cout<<"Enter height: ";
        cin>>height;
    }
    void getSide1()
    {
        cout<<"Enter 1st side: ";
        cin>>side1;
    }
    void getSide2()
    {
        cout<<"Enter 2nd side: ";
        cin>>side2;
    }
    void getSide3()
    {
        cout<<"Enter 3rd side: ";
        cin>>side3;
    }
    void getRadius()
    {
        cout<<"Enter radius: ";
        cin>>radius;
    }
};

class TwoDimensionalShape : public Shape
{
public:
    TwoDimensionalShape(): Shape()
    {
        cout<<"2D object created\n";
    }

};

class ThreeDimensionalShape : public Shape
{
public:
    ThreeDimensionalShape(): Shape()
    {
        cout<<"3D object created\n";
    }
};

class Rectangle : public TwoDimensionalShape
{
public:
    Rectangle()
    {
        cout<<"Rectangle is created\n";
    }
    void getLength()
    {
        TwoDimensionalShape::getLength();
    }
    void getBreadth()
    {
        TwoDimensionalShape::getBreadth();
    }
    void showInfo()
    {
        cout<<"Perimeter: "<<length+breadth<<"\n";
        cout<<"Area: "<<length*breadth<<"\n";
    }
};

class Square : public TwoDimensionalShape
{
public:
    Square()
    {
        cout<<"Square is created\n";
    }
    void getLength()
    {
        TwoDimensionalShape::getLength();
    }
    void showInfo()
    {
        cout<<"Perimeter: "<<2*length<<"\n";
        cout<<"Area: "<<length*length<<"\n";
    }
};

class Triangle : public TwoDimensionalShape
{
public:
    Triangle()
    {
        cout<<"Triangle is created\n";
    }
    void getSide1()
    {
        TwoDimensionalShape::getSide1();
    }
    void getSide2()
    {
        TwoDimensionalShape::getSide2();
    }
    void getSide3()
    {
        TwoDimensionalShape::getSide3();
    }
    void showInfo()
    {
        double s = side1+side2+side3;
        cout<<"Perimeter: "<<s<<"\n";
        cout<<"Area: "<<sqrt(s*(s-side1)*(s-side2)*(s-side3))<<"\n";
    }
};

class Circle : public TwoDimensionalShape
{
public:
    Circle()
    {
        cout<<"Circle is created\n";
    }
    void getRadius()
    {
        TwoDimensionalShape::getRadius();
    }
    void showInfo()
    {
        cout<<"Circumference: "<<2*pi*radius<<"\n";
        cout<<"Area: "<<pi*radius*radius<<"\n";
    }
};

class Parallelepiped : public ThreeDimensionalShape
{
public:
    Parallelepiped()
    {
        cout<<"Parallelepiped is created\n";
    }
    void getLength()
    {
        ThreeDimensionalShape::getLength();
    }
    void getBreadth()
    {
        ThreeDimensionalShape::getBreadth();
    }
    void getHeight()
    {
        ThreeDimensionalShape::getHeight();
    }
    void showInfo()
    {
        cout<<"Surface Area: "<<2*(length*breadth + breadth*height + height*length)<<"\n";
        cout<<"Volume: "<<length*breadth*height<<"\n";
    }
};

class Cube : public ThreeDimensionalShape
{
public:
    Cube()
    {
        cout<<"Cube is created\n";
    }
    void getLength()
    {
        ThreeDimensionalShape::getLength();
    }
    void showInfo()
    {
        cout<<"Surface Area: "<<6*length*length<<"\n";
        cout<<"Volume: "<<length*length*length<<"\n";
    }
};

class Cylinder : public ThreeDimensionalShape
{
public:
    Cylinder()
    {
        cout<<"Cylinder is created\n";
    }
    void getLength()
    {
        ThreeDimensionalShape::getLength();
    }
    void getBaseRadius()
    {
        ThreeDimensionalShape::getRadius();
    }
    void showInfo()
    {
        cout<<"Surface Area: "<<2*pi*radius*length + 2*pi*radius*radius<<"\n";
        cout<<"Volume: "<<pi*radius*radius*length<<"\n";
    }
};

class Sphere : public ThreeDimensionalShape
{
public:
    Sphere()
    {
        cout<<"Sphere is created\n";
    }
    void getRadius()
    {
        ThreeDimensionalShape::getRadius();
    }
    void showInfo()
    {
        cout<<"Surface Area: "<<4*pi*radius*radius<<"\n";
        cout<<"Volume: "<<(4/3)*pi*(pow(radius,3))<<"\n";
    }
};

int main()
{
    int n, c;
    while(1)
    {
        cout<<"Select Dimension:\n1. 2D\n2. 3D\n0. Exit\n";
        cout<<"Enter choice: ";
        cin>>n;
        cout<<"\n";
        if(n==1)
        {
            cout<<"Select shape:\n1. Rectangle\n2. Square\n3. Triangle\n4. Circle\n";
            cout<<"Enter choice: ";
            cin>>c;
            cout<<"\n";
            if(c==1)
            {
                Rectangle r;
                r.getLength();
                r.getBreadth();
                r.showInfo();
                cout<<"\n";
            }
            else if(c==2)
            {
                Square s;
                s.getLength();
                s.showInfo();
                cout<<"\n";
            }
            else if(c==3)
            {
                Triangle t;
                t.getSide1();
                t.getSide2();
                t.getSide3();
                t.showInfo();
                cout<<"\n";
            }
            else if(c==4)
            {
                Circle ci;
                ci.getRadius();
                ci.showInfo();
                cout<<"\n";
            }
        }
        else if(n==2)
        {
            cout<<"Select shape:\n1. Parallelepiped\n2. Cube\n3. Cylinder\n4. Sphere\n";
            cout<<"Enter choice: ";
            cin>>c;
            cout<<"\n";
            if(c==1)
            {
                Parallelepiped p;
                p.getLength();
                p.getBreadth();
                p.getHeight();
                p.showInfo();
                cout<<"\n";
            }
            else if(c==2)
            {
                Cube cu;
                cu.getLength();
                cu.showInfo();
                cout<<"\n";
            }
            else if(c==3)
            {
                Cylinder cy;
                cy.getLength();
                cy.getBaseRadius();
                cy.showInfo();
                cout<<"\n";
            }
            else if(c==4)
            {
                Sphere sp;
                sp.getRadius();
                sp.showInfo();
                cout<<"\n";
            }
        }
        else
            return 0;
    }
}
