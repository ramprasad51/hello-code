//Multiplying  2numbers by the process of FileHandling
#include<fstream>//for file handling
#include<iostream>
using namespace std;
int main(){
    int num1,num2;
    ifstream inputFile("input.txt");//creating an object of ifstream class 
    if(inputFile.is_open()){
        inputFile>>num1>>num2;//reading 2 numbers from the file
        inputFile.close(); 
    }else{
        cerr<<"Unable to open input.txt";//error handling
        return 1;
    }
    int result=num1*num2;
    ofstream outputFile("output.txt");//creating an object of ofstream class
    if(outputFile.is_open()){
        outputFile<<result;
        outputFile.close();
    }else{
        cerr<<"Unable to open output file";//error handling
        return 1;
    }
    cout<<"Result  written in output.txt: "<<result<<endl;
    return 0;
}