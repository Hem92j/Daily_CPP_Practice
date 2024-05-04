#include <iostream>

int addition (int a, int b) ;
int next_num(int a);
int convert_minutes(int minutes);
float calculate_triangle_area(int base, int height);
int remainder (int a, int b);
bool is_equal (int a, int b);
bool compare_zero(int a);
bool divisible_by_five(int a);

int main() {

    int a {1};
    int b {6};

    std::cout << "1. Addition of " << a << " and " << b << " : "<< addition(a,b) << '\n';
    std::cout << "2. Next number after " << a << " : "<< next_num(a) << '\n';
    std::cout << "3. " << a <<" minutes to seconds: " << convert_minutes(a) << '\n';
    std::cout << "4. Area of triangle with base " << a << " and height " << b << " : "<< calculate_triangle_area(a, b) << '\n';
    std::cout << "5. Remainder of " << a << " and " << b << ": "<<remainder(a, b) << "\n";
    std::cout << "6. " << a << " and " << b << " are "<< is_equal(a,b) << '\n';
    std::cout << "7. Is number " << a << " less than zero ? " << compare_zero(a) << '\n';
    std::cout << "8. Is number " << b << " divisible by 5 ? " << divisible_by_five(b) << '\n';
    return 0;
}



// 1. Return the sum of two numbers

int addition (int a, int b) {
    return a + b ;
}

// 2. Return the next number

int next_num(int a) {
    return a + 1 ;
}

// 3. Convert minutes to seconds

int convert_minutes(int minutes) {
    return minutes * 60;
}

// 4. area of triangle

float calculate_triangle_area(int base, int height) {
    return (base * height)/2 ;
}

// 5. remainder of the two number

int remainder (int a, int b) {
    return a % b;
}

// 6. check if the number are equal

bool is_equal (int a, int b) {
    return (a == b);
}

// 7. Is number less then or equal to zero

bool compare_zero(int a) {
    return (a < 0);
}

// 8. Check if the integer is divisible by 5

bool divisible_by_five(int a){
    return (a % 5 == 0);
}