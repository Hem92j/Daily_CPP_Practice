#include <iostream>

// write a function to add two numbers
int add_num (int& a, int& b) {
	int result {};
	result = a + b;
	return result;
}

// write a function to add one 
int add_one (int& a) {
	int result {};
	result = a + 1;
	return result;
}


int main () {

	int a = 5;
	int b = 10;

	int res = add_num(a, b);
	std::cout << "add_num: "<< res << '\n';

	int one = add_one(a);
	std::cout << "add_one: "<< one << '\n';
	return 0;
}