// C++ program to demonstrate the concept of Single Inheritance
#include<iostream>
using namespace std;
// Base class
class vehicle
{
    public:
    string brand;
// Method to display the brand of the vehicle
    void showbrand()
    {
        cout<<"Brand: "<<brand<<endl;
    }
};
// Derived class inheriting from the base class vehicle(single inheritance)
class car : public vehicle
{
    public:
    string model;
// Method to display the model of the car
    void showmodel()
    {
        cout<<"Model: "<<model<<endl;
    }
};

int main()
{
    // Creating an object of the derived class car
    car mycar;
//Set values for the brand and model of the car
    mycar.brand="Mahindra";//Inherited from the base class vehicle
    mycar.model="XUV 700";//Specific to the derived class car
// Displaying the brand and model of the car using the methods from the base and derived class
    mycar.showbrand();// Method from the base class vehicle
    mycar.showmodel();// Method from the derived class car

    return 0;    
}