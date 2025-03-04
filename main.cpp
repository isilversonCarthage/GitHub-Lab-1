#include <iostream>
using namespace std;

void printName();

int main()
{
    int currentYear = 0;
    int birthYear = 0;
    cout<<"GitHub Demo"<<endl;
    void printName();
    cout<<"enter the current year"<<endl;
    cin>>currentYear;
    cout<<"now enter your birth year"<<endl;
    cin>>birthYear;
    cout<<"Isaac, you are "<<currentYear - birthYear<<" years old"<<endl;

    return 0;
}

void printName()
{
    cout<<"Isaac Silverson"<<endl;
}