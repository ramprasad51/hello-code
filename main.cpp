//C++ program to add two distances using classes and objects
#include <iostream>
using namespace std;
class Distance{
    //private members will not be accessible outside the class & only class functions can access them
     private:
    int meters;
    int centimeters;

    public:
    void getDistance()  //input function to get distance from user
    {
        cout<<"Enter meters: ";
        cin>>meters;
        cout<<"Enter centimeters: ";
        cin>>centimeters;
    }
    void displayDistance()  //output function to display the distance
    {
        cout<<"Distance: "<<meters<<"meters"<<centimeters<<"centimeters"<<endl;
    }
    Distance addDistance(const Distance&d1,const Distance&d2)//function to add two distances and return the result
    {
        Distance result;    //creating an object of Distance class to store the result of addition

        result.meters=d1.meters+d2.meters;   //adding meters of both distances and storing in result object
        result.centimeters=d1.centimeters+d2.centimeters;   //adding centimeters of both distances and storing in result object
        if(result.centimeters>=100)    //if centimeters is greater than or equal to 100, convert it to meters
        {
            result.meters+=result.centimeters/100;  //converting centimeters to meters and adding to meters
            result.centimeters=result.centimeters%100;  //storing the remaining centimeters after converting to meters
        }
        return result;

    }
};

int main()
{
    Distance distance1,distance2,result;    //creating objects of Distance class to store the distances and result of addition

    cout<<"Enter first distance: "<<endl;
    distance1.getDistance();
    cout<<"Enter second distance: "<<endl;
    distance2.getDistance();
    result=result.addDistance(distance1,distance2);
    cout<<"Sum of the distances: "<<endl;
    result.displayDistance();
    return 0;

}