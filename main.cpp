// Error handling in C++ using try, catch and throw
#include <iostream>
using namespace std;
double division(double a, double b){
    if(b==0){
        throw "Division by zero condition!";// throwing an exception
    }
    return a/b;
}
int main(){
    int l=1729;
    int m=0;
    double n=0;
    try{// try block to catch the exception
        n=division(l,m);
        cout<<n<<endl;
    }
    catch(const char*msg){
        cerr<<msg<<endl;// catching the exception and printing the error message
    }
        return 0;
}