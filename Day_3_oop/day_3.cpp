// Write a C++ program to implement a class called Circle that has private member variables for radius. Include member functions to calculate the circle's area and circumference.
// https://www.w3resource.com/cpp-exercises/oop/index.php

#include <iostream>
#include <cmath>

const double PI = 3.1415;

class Circle {
public:

    Circle(){
        // default contructor
        std::cout << "Default constructor of Circle class Initialized..." << '\n';
    } 

    Circle (double rad): radius(rad)
    {
        std::cout << "Parameterized constructor of Circle class Initialized with radius " << radius << " unit" <<'\n';
    }

    double calculate_area() 
    {
        return PI * pow(radius, 2);
    }

    double calculate_circumference()
    {
        return 2 * PI* radius;
    }

private:
    double radius;
};


int main() {
    Circle circle(2.3);
    std::cout << "Area of the circle is " << circle.calculate_area() << " square_unit." << '\n';
    std::cout << "Circumference of the circle is " << circle.calculate_circumference() << " unit." << '\n';

    Circle circle2;
    return 0;
}