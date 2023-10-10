//
// Created by Jasmine Tang on 10/10/23.
//
#include "iostream"

int main() {
    int a_0 = 25; // Integer (Bit number is platform dependent)
    int32_t a_1 = 0; // Explicitly request 32 bit
    uint64_t a_2 = 0; // Explicitly request 64 bit

    float fl = 0.125; // Single-precision floating point
    double d = 3.14159;  // Double-precision floating point

    char grade = 'A'; // 8-bit character

    bool isStudent = true; // 8-bit boolean

    enum Color { RED, GREEN, BLUE }; // Enum type
    Color myColor = RED;

    struct Point {
        int x;
        int y;
    };

    Point origin = {0, 0};

    int numbers[5] = {1, 2, 3, 4, 5}; // Arrays

    int* ptr; // Pointers

    int age = 0;
    int& refAge = age; //

    // Allows the compiler to automatically deduce the data type based on the initialization value.
    auto myVar = 42; // The type of myVar will be deduced as int.


    return 0;
}

void myFunction() {
    // Void-type

    // Returning nothing
}
