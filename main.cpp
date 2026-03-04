//Hierarchical Inheritance Program
#include<iostream>
using namespace std;
class shape{
    public:
    int a;
    int b;

    void get_data(int n,int m){
        a=n;
        b=m;
    }
};
class Rectangle:public shape
{
    public:
    int rect_area()
    {
        int result=a*b;
        return result;
    }
};
class Triangle:public shape
{
    public:
    int triangle_area()
    {
        float result=0.5*a*b;
        return result;
    }
};
int main()
{
    Rectangle r;
    Triangle t;
    int length,breadth,height,base;
    cout<<"Enter Length & breadth of a rectangle: "<<endl;
    cin>>length>>breadth;
    r.get_data(length,breadth);
    int m=r.rect_area();
    cout<<"Area of rectangle is:  "<<m<<endl;
    cout<<"Enter  Base & height of Traingle: "<<endl;
    cin>>base>>height;
    t.get_data(base,height);
    float n=t.triangle_area();
    cout<<"Area of triangle: "<<n<<endl;
    return 0;
}