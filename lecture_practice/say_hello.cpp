#include <iostream>
using namespace std;

string SayHello(const string& name = "World") {
    return "Hello, " + name + "!";
}

int main() {
    cout << SayHello() << endl; // Default argument
    cout << SayHello("Kenneth") << endl; // Custom argument
    return 0;
}