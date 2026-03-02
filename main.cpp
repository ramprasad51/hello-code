// C++ program to demonstrate the use of multiple inheritance
#include<iostream>
using namespace std;
class A  // base class 1
{
    protected: 
    int a;
    public:
    void get_a(int n) // function to get value of a
    {
        a=n;
    }
};
class B // base class 2
{
    protected:
    int b;
    public:
    void get_b(int n) // function to get value of b
    {
        b=n;
    }
};
class C:public A,public B  // derived class  of A and B (multiple inheritance)
{
    public:
    void display()
    {
        cout<<"The value of a is: "<<a<<endl;
        cout<<"The value of b is: "<<b<<endl;
        cout<<"The sum of a & b is: "<<a+b<<endl;
    }
};

int main()
{
    C c;            // object of class C
    c.get_a(10);    // calling function of class A
    c.get_b(20);    // calling function of class B
    c.display();    // calling function of class C
    return 0;
}