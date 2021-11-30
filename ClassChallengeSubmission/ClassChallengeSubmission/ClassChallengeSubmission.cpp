// ClassChallengeSubmission.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;



class SuperShape {
protected:
    double x, y;
public:
    string Color;
    void set_dim(double i, double j = 0) {
        x = i;
        y = j;
    }
    virtual void show_area() {
        cout << "No area computation defined ";
        cout << "for this class.\n";
    }
};

class tri : public SuperShape {
public:
    
    void show_area() { //overrides the shape that wasn't listed.
        cout << "Triangle with height ";
        cout << x << " and base " << y;
        cout << " has an area of ";
        cout << x * 0.5 * y << ".\n"; 
        
    }
};

class rec : public SuperShape {
public:
    void show_area() {
        cout << "Square with dimensions ";
        cout << x << "x" << y;
        cout << " has an area of ";
        cout << x * y << ".\n";
    }
};
class circ : public SuperShape {
public:
    void show_area() {
        cout << "Circle with radius ";
        cout << x;
        cout << " has an area of ";
        cout << 3.14 * x * x << ".\n";
    }
};

int main()
{
    string triangle;
    string rectangle;
    string circle;
    string shape;
    int height, base, height1, width, radius;

    SuperShape* p; // create a pointer to base type


    
    cout << "To start, first, give me a shape (it can be a triangle, rectangle, or circle):";

    cin >> shape;

    if (shape == "triangle") {
        tri t; // create instantiation of objects of derived types; or way to call
        cout << "What is the base of the triangle?: ";
        cin >> base;
        cout << "What is the height of the triangle? (top to bottom): ";
        cin >> height;
        t.Color = "Purple ";
        cout << "Your color is: ";
        cout << (t.Color);
        p = &t;
        p->set_dim(height, base);
        p->show_area();
    }
    else
        if (shape == "rectangle") {
            rec s;
            cout << "What is the width of the rectangle?: ";
            cin >> width;
            cout << "What is the height of the rectangle?: ";
            cin >> height1;
            s.Color = "Blue ";
            cout << "Your color is: ";
            cout << (s.Color);
            p = &s;
            p->set_dim(height1, width);
            p->show_area();
        }
        else
            if (shape == "circle") {
                circ c;
                cout << "What is the radius of the circle?: ";
                cin >> radius;
                c.Color = "Red ";
                cout << "Your color is: ";
                cout << (c.Color);
                p = &c;
                p->set_dim(radius);
                p->show_area();
            }
            else
                cout << "Sorry, that's not one of the options. Please re-enter and try again.";

    return 0;
}