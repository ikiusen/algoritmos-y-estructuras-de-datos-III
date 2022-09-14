#include <iostream>
#include <OCFString.h>

void TestOCFString(OCFString s2)
{
    std::cout << s2;
}

int main()
{
    OCFString s1("Hola Mundo");
    OCFString s2 = s1;
    OCFString vec[10];

    TestOCFString(s2);
    return 0;
}