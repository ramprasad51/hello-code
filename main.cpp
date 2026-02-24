//C++ program to demonstrate function overloading(for compile-time polymorphism)
#include<iostream>
using namespace std;
class cal
{
    public:
    static int add(int a,int b)//2 arguments
    {
        return a+b;
    }

    static int add(int a,int b,int c)//3 arguments
    {
        return a+b+c;
    }
};
//
int main()
{
    cal c;// object declration
    cout<<c.add(10,20)<<endl;
    cout<<c.add(12,20,30)<<endl;

    return 0;
}