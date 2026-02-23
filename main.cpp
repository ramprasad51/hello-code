//C++ Class for basic geometry calculations 
#include<iostream>
#include<cmath>
using namespace std;
class GeomtryCalculator
{
    public:
    //calculate area of a rectangle
    static double calculateRectangleArea(double length,double width)
    {
        return length*width;
    }
    //calculate perimeter of a rectangle
    static double calculateRectanglePerimeter(double length,double width)
    {
        return 2*(length+width);
    }
    //calculate area of a circle
    static double calculateCircleArea(double radius)
    {
        return M_PI*radius*radius;
    }
    //calculate circumference of a circle
    static double calculateCircleCircumference(double radius)
    {
        return 2*M_PI*radius;
    }
    //calculate area of a triangle using Heron's formula
    static double calculateTriangleArea(double sideA,double sideB,double sideC)
    {
        double s=(sideA+sideB+sideC)/2.0;
        return sqrt(s*(s-sideA)*(s-sideB)*(s-sideC));
    }
};

int main()
{
    double length=5.0;
    double width=3.0;
    double radius=4.0;
    double sideA=7.0;
    double sideB=24.0;
    double sideC=25.0;

    GeomtryCalculator G1;//create an object of the class
//call the functions and display results
    cout<<"Rectangle Area:"<<G1.calculateRectangleArea(length,width)<<endl;
    cout<<"Rectangle Perimeter:"<<G1.calculateRectanglePerimeter(length,width)<<endl;
    cout<<"Circle Area:"<<G1.calculateCircleArea(radius)<<endl;
    cout<<"Circle Circumference:"<<G1.calculateCircleCircumference(radius)<<endl;
    cout<<"Triangle Area: "<<G1.calculateTriangleArea(sideA,sideB,sideC)<<endl;
    return 0;
}