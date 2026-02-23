//Initialize and display student data through member function
#include<iostream>
using namespace std;
class student
{
    public:
    int id;//data members
    string name;

    void insert(int i, string n)//member function to initialize data
    {
        id=i;
        name=n;
    }
    void display()//member function to display data
    {
        cout<<id<<"  "<<name<<endl;
    }
};

int main(void)
{
    student s1;
    student s2;
    //initializing data through member function
    s1.insert(51,"Ram");
    s2.insert(93,"Prasad");
    //displaying data through member function
    s1.display();
    s2.display();
    return 0;

}