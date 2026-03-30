//Programm to dmonstrate the ENCAPSULATION in C++
#include <iostream>
using namespace std;

class Example{
    private:
    int secret; // Private member variable, not accessible outside the class
    public:
    void setSecret(int value){// Public member function to set the value of the private member variable
        secret = value;
    }
    int getSecret(){// Public member function to get the value of the private member variable
        return secret;
    }
};

int main() {
    Example obj;// Create an object of the Example class
    obj.setSecret(84);// Set the value of the private member variable using the public member function
    cout << "The secret value is: " << obj.getSecret() << endl;
    return 0;
}