// OOP Submission Assignment.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

int main()
{
    //Classes and objects
    class Dog {
    public:
        std::string state;
        std::string behavior;
        int height;
        int weight;
        void bark() {
            std::cout << "Woof, woof! \n";
        }
    };

    //Derived class-Child--Inherit
    class myDog1 : public Dog {
    public:
        std::string state = "Hound " "Brown ";
        int height = 2;
        int weight = 60;

        std::string behavior = "Shake " "Sit " "Lay down ";
        
    };

   int main();
    {
       myDog1 doggy;
       doggy.bark();
       std::cout << doggy.state + " " + doggy.behavior;
       std::cout << "2 feet " "60 pounds";

       return 0;
    }

   /* int main();
    {
        Dog myDog;
        myDog.height();
        std::cout << myDog.state + " " + myDog.behavior;
    }

        

        std::cout << dogObj1.state << " " << dogObj1.behavior << " " << dogObj1.weight << "\n";*/
        //cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << "\n";
        //return 0;
}

