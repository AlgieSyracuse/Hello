#include <iostream>
#include <thread>
#include <string>

#include "print.hpp"
using namespace std;

int main() {
    string msg = "Hello World!";
    PrintTitle(msg);

    DemoFctrl("./sampleText.txt");
    DemoFStream("./sampleText.txt");

    return 0;
}
