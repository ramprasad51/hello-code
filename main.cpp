// C++ program to demonstrate protected access specifier
#include<iostream>
using namespace std;

class Base{
    public:
    int a=22;
    protected:
    int b=44;
};

class Derived: protected Base{
    public:
    void show()
    {
        cout<<a<<endl; //public member of base class becomes protected member in derived class
        cout<<b<<endl; //protected member of base class remains protected member in derived class
    }
};

int main()
{
    Derived obj; 
    obj.show(); //accessing public and protected members of base class through derived class function
    // obj.a; // This would cause an error as 'a' is now protected in the derived class which was public in the base class


    return 0;
}