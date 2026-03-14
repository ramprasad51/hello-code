//Program to demonstrate the concept of constructor overloading in C++
#include<iostream>
using namespace std;
class Number{ 
    public:
    Number() //Default constructor
    {
        cout<<"Default constructor called"<<endl;
    }
    Number(int a) //Single parameter constructor
    {
        cout<<"Single Parameter constructor:"<<a<<endl;
    }
    Number(int a,int b) //Two parameter constructor
    {
        cout<<"Two Parameter constructor: "<<a<<"\t&\t"<<b<<endl;
    }
};

int main()
{
    Number n1; //Default constructor will be called when object is created
    Number n2(108); //Single parameter constructor will be called
    Number n3(24,39); //Two parameter constructor will be called
    return 0;
}