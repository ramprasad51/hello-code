// C++ program to demonstrate virtual function
#include<iostream>
using namespace std;
class A   // Base class
{
    int x=5;
    public:
    virtual void display() // Virtual function
    {
        cout<<"Value of x is: "<<x<<endl;
    }
};

class B : public A  // Derived class    single inheritance
{
    int y=10;
    public:
    void display() // Override the base class function
    {
        cout<<"Value of y is: "<<y<<endl;
    }
};

int main()
{
    A *a;  // Base class pointer
    B b;  // Derived class object
    a=&b;  // Base class pointer points to derived class object
    a->display(); // Calls the display function of class B due to virtual function mechanism
    b.display(); // Calls the display function of class B directly
    return 0;
}