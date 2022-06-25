#include <OCFString.h>

OCFString::OCFString() {
    rep = new char[1];
    rep[0] = '\0';
}

OCFString::OCFString(const OCFString &s) {
    rep = new char[s.size() + 1];
    ::strcpy(rep, s.rep);
}

OCFString::OCFString(const char *s) {
    int length = ::strlen(s) + 1;
    rep = new char[length];
    ::strcpy(rep, s);
}

int OCFString::size() const {
    return ::strlen(rep);
}

OCFString& OCFString::operator=(const OCFString &s) {
    if(rep != s.rep) {
        delete[] rep;
        int length = s.size() + 1;
        rep = new char[length];
        ::strcpy(rep, s.rep);
    }
    return *this;
}

OCFString& operator+(OCFString& left, const OCFString& right) 
{
    char* rep = new char[left.size() + right.size() + 1];
    ::strcpy(rep, left.rep);
    ::strcat(rep, right.rep);
    delete[] left.rep;
    left.rep = rep;
    return left;
}

const OCFString operator+(const OCFString& left, const OCFString& right) 
{
    OCFString retval(left);
    return retval + right;
}

OCFString operator+(const char* left, const OCFString& right) 
{
    return OCFString(left) + right;
}

std::ostream& operator<<(std::ostream& os, const OCFString& s) {
    os << s.rep;
    return os;
}

OCFString::~OCFString() {
    delete[] rep;
}