//By using 'this' keyword resolving the variable shadowing 
#include<iostream>
using namespace std;
class person{
    private:
    int age;
    public:
    void setAge(int age)
    {
        this->age=age;
    }
    int getAge()
    {
        return this->age;
    }
};

int main()
{
    person p;
    p.setAge(16);
    cout<<"Person age: "<<p.getAge();
    return 0;
}