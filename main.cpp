// program to understand Constructor overloading
#include<iostream>
using namespace std;

class Person{
    private:
    int age;
    public:
    Person()//Default constructor
    {
        age=18;
    }
    Person(int a)//Single argument constructor
    {
        age=a;
    }
    int getAge()
    {
        return age;
    }
};

int main()
{
    Person p1;
    Person p2(48);
    cout<<"Person1 age= "<<p1.getAge()<<endl;
    cout<<"Person2 age= "<<p2.getAge()<<endl;
    return 0;
}