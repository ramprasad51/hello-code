// program to demonstrate the operator overloading 
#include<iostream>
using namespace std;
class Test{
    private:
    int num;
    public:
    Test() // constructor
    {
        num=8;
    }
    void operator ++()
    {
        num+=2;
    }
    void print()
    {
        cout<<"The count is: "<<num;
    }
};

int main()
{
    Test tt;// object of test class
    ++tt;//
    tt.print();
    return 0;
}