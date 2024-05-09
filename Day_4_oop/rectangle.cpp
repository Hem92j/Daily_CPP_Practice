// Write a C++ program to implement a class called Rectangle that has private member variables for radius. Include member functions to calculate the Rectangle's area and circumference.
// https://www.w3resource.com/cpp-exercises/oop/index.php

#include <iostream>
#include <cmath>

const double PI = 3.1415;

class Rectangle {
public:

    Rectangle(){
        // default contructor
        std::cout << "Default constructor of Rectangle class Initialized..." << '\n';
    } 

    Rectangle (double len, double wid): length(len), width (wid)
    {
        std::cout << "Parameterized constructor of Rectangle class Initialized with length " << length << " and width " << width <<" unit" <<'\n';
    }

    double calculate_area() 
    {
        return length * width;
    }

    double calculate_perimeter()
    {
        return 2 *(length + width);
    }

private:
    double length;
    double width;
};


int main() {
    Rectangle Rec(2.0, 1.0);
    std::cout << "Area of the Rectangle is " << Rec.calculate_area() << " square_unit." << '\n';
    std::cout << "Circumference of the Rectangle is " << Rec.calculate_perimeter() << " unit." << '\n';

    Rectangle Rec2;
    return 0;
}