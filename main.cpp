// accessing  members using "this" keyword 
#include <iostream>
using namespace std;

class Test{
    public:
    string teststring;
    void setData(string Teststring){
        this->teststring = Teststring; // using "this" keyword to access the member variable
    }
    void getandPrint(string str)
    {
        this->setData(str); // using "this" keyword to call the member function
        cout << "The string is: " << this->teststring << endl; 
    }
};

int main(){
    Test t;
    t.getandPrint("This is a test member access using \"this\" keyword!!!");
    return 0;
}