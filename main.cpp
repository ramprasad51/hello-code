//programm to understand exception handling
#include<iostream>
using namespace std;
int main(){
    try{
        throw 45.0;
    }
    catch (int i){
        cout<<"An integer: "<<i<<endl;
    }
    catch(double d){
        cout<<"An floating: "<<d<<endl;
    }
    return 0;
}