//C++ Programm to multiply two complex numbers using class & objects
#include<iostream>
using namespace std;
//Complex class 
class complex{
    float real;
    float imag;

public:
//Function to set the value of real and imaginary part of complex number
    void setvalue(float r,float i)
    {
        real=r;
        imag=i;
    }
//Static function to multiply two complex numbers
    static complex multiply(const complex &c1,const complex &c2)
    {
        complex result;
        result.real=c1.real*c2.real - c1.imag*c2.imag;
        result.imag=c1.real*c2.imag + c1.imag*c2.real;
        return result;
    }
//Function to display the complex number
    void display()
    {
        if(imag>=0)
        cout<<real<<"+"<<imag<<"i"<<endl;
        else
        cout<<real<<"-"<<imag<<"i"<<endl;
    }
};

int main()
{//Creating objects of complex class
    complex c1,c2,result;
//Variables to store real and imaginary parts of complex numbers
    float real1,imag1,real2,imag2;

    cout<<"Enter real & imaginary part of first complex number: ";
    cin>>real1>>imag1;
    c1.setvalue(real1,imag1);

    cout<<"Enter real & imaginary part of second complex number: ";
    cin>>real2>>imag2;
    c2.setvalue(real2,imag2);
//Multiplying two complex numbers using static function
    result = complex::multiply(c1,c2);
    cout<<"Result of multiplication: ";
    result.display();
    return 0;

}