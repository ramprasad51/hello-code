//Class and Object in C++ example program
#include<iostream>
using namespace std;
class student{
    public:
    int id;
    string name;
};

int main()
{
    student s1;//object of class student
    s1.id=51;
    s1.name="RAM PRASAD";
    cout<<s1.id<<endl;
    cout<<s1.name<<endl;
    return 0;
}