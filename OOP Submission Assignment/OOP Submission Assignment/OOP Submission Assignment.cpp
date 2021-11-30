// OOP Submission Assignment.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

//Classes and objects
class Dog {
public:
    string Breed;
    string Color;
    int height;
    int weight;
    void bark() {
        cout << "Woof, woof! \n"; //behavior
    }
};

 

int main()
{
    Dog dogobj;
    dogobj.Breed = "Hound";
    dogobj.Color = "Brown";
    dogobj.height = 2;
    dogobj.weight = 60;

    dogobj.bark();
    cout << dogobj.Breed << " " << dogobj.Color << " " << dogobj.height << " " << dogobj.weight;
    return 0;

}



