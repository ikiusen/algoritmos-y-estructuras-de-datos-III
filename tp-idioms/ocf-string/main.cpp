#include <OCFString.h>
#include <iostream>

void TestOCFString(OCFString string) {
    std::cout << string;
}

int main() {
    OCFString s1("Hola Mundo");
    OCFString s2 = s1;
    OCFString vec[10];

    TestOCFString(s1);
    return 0;
}