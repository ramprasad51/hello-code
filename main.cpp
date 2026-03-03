//Programm to understand function overriding
#include<iostream>
using namespace std;
class Animal{ //base class
    public:
    void sound()
    {
        cout<<"These is generic animal sound"<<endl;
    }
};
class Dog:public Animal //derived class 1 inherits from base class
{
    public:
    void sound()
    {
        cout<<"The dog barks"<<endl;
    }
};
class Cat:public Animal //derived class 2
{
    public:
    void sound()
    {
        cout<<"Cat meows"<<endl;
    }
};
int main()
{
    Animal animal;//object of base class
    Dog dog;//object of derived class 1
    Cat cat;//object of derived class 2
    //calling the sound function for each object
    animal.sound();
    cat.sound();
    dog.sound();
    return 0;
}
