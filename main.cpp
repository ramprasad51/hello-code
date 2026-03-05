//Programm to understand getter & setter functi(o)n
#include<iostream>
using namespace std;

class circle{
private:
double  radius;
public:
void setRadius(double r){//Acessing radius through setter funtion
    if(r>0){
        radius=r;
    }
        else
        {
            cout<<"Please enter a valid radius"<<endl;
        }
}
double getRadius()
{
    return radius;
}
double calculateArea()
{
    return 3.14*radius*radius;
}
};

int main()
{
    circle c;
    c.setRadius(6.00);
    cout<<"Radius of circle:  "<<c.getRadius()<<endl;
    cout<<"Area of circle:     "<<c.calculateArea()<<endl;
    return 0;
}

