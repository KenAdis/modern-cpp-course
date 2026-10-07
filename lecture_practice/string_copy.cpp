#include <iostream>
#include <string>

int main() {
    std::string src = "Hello, World!";
    std::string dest;

    std::cout << "Source string: " << src << std::endl;

    dest = src; // Copying the source string to destination string
    std::cout << "Destination string: " << dest << std::endl;

    std::cout << "Source string: " << src << std::endl;

    return 0;
}