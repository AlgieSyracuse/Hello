#include <iostream>
#include <thread>
#include "print.hpp"
using namespace std;

int main() {
    string msg = "Hello World!";
    Print(msg);

    unsigned n = 0;
    while(n < msg.size()) {
        cout << msg[n++] << endl;
    }
    
    return 0;
}
