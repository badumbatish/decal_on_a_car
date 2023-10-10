//
// Created by Jasmine Tang on 10/10/23.
//

#include <iostream>

int main() {
    std::cout << "Using for-loop, we start iterating: " << std::endl;
    for (int i = 0; i < 5; i++) {
        std::cout << "This is iteration " << i << std::endl;
    }

    std::cout << std::endl; // Output a newline
    int count = 0;
    std::cout << "Using while-loop, we start iterating: " << std::endl;
    while (count < 5) {
        std::cout << "This is iteration " << count << std::endl;
        count++;
    }

    std::cout << std::endl;

    int x = 11;

    if (x > 20) {
        std::cout << "x is greater than 20" << std::endl;
    } else if (x > 10) {
        std::cout << "x is greater than 10" << std::endl;
    }
    else {
        std::cout << "x is not greater than 10" << std::endl;
    }

    return 0;
}
