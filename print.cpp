#include "print.hpp"
#include <fcntl.h>
#include <unistd.h>
#include <fstream>

void PrintTitle(const string &s) {
    string title = "\n\n ---< " + s + " >---\n";
    cout << title;
    int n = title.size();
    for(int i=0; i<n; ++i) {
        cout << "=";
    }
    cout << "\n";
}

void DemoFctrl(const string &path) {
    PrintTitle("start DemoFctrl");
    int fid = open(path.c_str(), O_RDWR| O_CREAT);
    char buf[5];
    while(read(fid, buf, 5)) {
        cout <<"~" << buf;
    }
}

void DemoFStream(const string &path) {
    PrintTitle("start DemoFStream");
    fstream fs(path);
    char buf[5];
    while(fs >> buf) {
        cout << "~" << buf;
    }
}