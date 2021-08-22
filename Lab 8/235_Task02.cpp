#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

class Seat
{
private:
    string s;
    char c;
public:
    void getComfortability()
    {
        cout<<"Comfortability level: ";
        cin>>s;
    }
    void getSeatWarmerPresence()
    {
        cout<<"Seat Warmer Present? (Y/N) : ";
        cin>>c;
    }
    void showSeatInfo()
    {
        cout<<"Comfortability level: "<<s<<"\n";
        cout<<"Seat Warmer Presence: "<<c<<"\n";
    }
};

class Wheel
{
private:
    int radius;
    const double pi = acos(-1.0);
public:
    void getRadius()
    {
        cout<<"Enter wheel radius (cm): ";
        cin>>radius;
    }
    void Circumference()
    {
        cout<<"Wheel circumference: "<<2*pi*radius<<" cm\n";
    }
};

class Engine
{
private:
    float fuel, energy;
    int rpm;
public:
    void getMaxFuelConsumptionRate()
    {
        cout<<"Maximum Fuel Consumption Rate (L/km): ";
        cin>>fuel;
    }
    void getMaxEnergyProductionRate()
    {
        cout<<"Maximum Energy Production Rate (HP): ";
        cin>>energy;
    }
    void getRPM()
    {
        cout<<"Average RPM: ";
        cin>>rpm;
    }
    void showEngineInfo()
    {
        cout<<"Maximum Fuel Consumption Rate: "<<fuel<<" L/km\n";
        cout<<"Maximum Energy Production Rate: "<<energy<<" HP\n";
        cout<<"Average RPM: "<<rpm<<"\n";
    }
};

class Door
{
private:
    string mode;
public:
    void doorOpeningMode()
    {
        cout<<"Door opening mode: ";
        cin>>mode;
    }
    void showDoor()
    {
        cout<<"Door opening mode: "<<mode<<"\n";
    }
};

class Car
{
private:
    string name;
    float acceleration;
    int capacity;
    Seat seat;
    Wheel wheel;
    Engine engine;
    Door door;
public:
    void getCarName()
    {
        cout<<"Enter car name: ";
        cin>>name;
    }
    void max_acceleration()
    {
        cout<<"Enter maximum acceleration of the car (m/s^2): ";
        cin>>acceleration;
    }
    void max_fuel_capacity()
    {
        cout<<"Enter maximum fuel capacity of car (L): ";
        cin>>capacity;
    }
    void getOtherInfo()
    {
        seat.getComfortability();
        seat.getSeatWarmerPresence();
        wheel.getRadius();
        engine.getMaxFuelConsumptionRate();
        engine.getMaxEnergyProductionRate();
        engine.getRPM();
        door.doorOpeningMode();
    }
    void display()
    {
        cout<<"\nCar name: "<<name<<"\n";
        cout<<"Maximum acceleration of the car: "<<acceleration<<" m/s^2\n";
        cout<<"Maximum fuel capacity: "<<capacity<<" L\n";
        seat.showSeatInfo();
        wheel.Circumference();
        engine.showEngineInfo();
        door.showDoor();
    }
};

int main()
{
    Seat s;
    s.getComfortability();
    s.getSeatWarmerPresence();
    s.showSeatInfo();
    cout<<"\n";

    Wheel w;
    w.getRadius();
    w.Circumference();
    cout<<"\n";


    Engine e;
    e.getMaxFuelConsumptionRate();
    e.getMaxEnergyProductionRate();
    e.getRPM();
    e.showEngineInfo();
    cout<<"\n";

    Door d;
    d.doorOpeningMode();
    d.showDoor();
    cout<<"\n";

    Car c;
    c.getCarName();
    c.max_acceleration();
    c.max_fuel_capacity();
    c.getOtherInfo();
    c.display();
}
