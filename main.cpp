//Storing and displaying employee details using member functions in C++
#include<iostream>
using namespace std;
class employee
{
    public:
    int id;
    string name;
    float salary;
    void insert(int i,string n,float s)
    {
        id=i;
        name=n;
        salary=s;
    }
    void display()
    {
        cout<<id<<"  "<<name<<" "<<salary<<endl;
    }
};

int main()
{
    employee e1;
    employee e2;
    e1.insert(264,"Shekar",75000);
    e2.insert(567,"Abhiraj",25000);
    e1.display();
    e2.display();
    return 0;
}
