#ifndef OCFSTRING_H
#define OCFSTRING_H

#include <iostream>
#include <cstring>
#include <ostream>

class OCFString
{
public:
    OCFString();
    OCFString(const OCFString &);
    OCFString(const char *);

    OCFString &operator=(const OCFString &);

    int size() const;
    ~OCFString();

    friend OCFString &operator+(OCFString &left, const OCFString &right);
    friend const OCFString operator+(const OCFString &left, const OCFString &right);
    friend OCFString operator+(const char *left, const OCFString &right);

    friend std::ostream &operator<<(std::ostream &os, const OCFString &s);

private:
    char *rep;
};
#endif