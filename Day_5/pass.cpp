
#include <iostream>
#include <vector>

void passByVal(int val);
void passByRef(int& ref);
void passByPointer(int* ptr);


int main() 
{
    int x = 5;
    int* xptr = &x;

    printf("x = %i \n", x);

    passByVal(x);
    printf("x = %i \n", x);

    passByRef(x);
    printf("x = %i \n", x);

    passByPointer(xptr);
    printf("x = %i \n", x);

    return 0;
}


void passByVal(int val) 
{
    val = 10;
    printf("val = %i \n", val);
}

void passByRef(int& ref) 
{   
    ref = 20;
    printf("ref = %i \n", ref);
}
void passByPointer(int* ptr) 
{
    *ptr = 30;
     printf("*ptr = %i \n", *ptr);
}