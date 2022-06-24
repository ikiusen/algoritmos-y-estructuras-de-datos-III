#include <OCFString.h>

OCFString::OCFString() {
    rep = new char[1];
    rep[0] = '\0';
}

OCFString::OCFString(const OCFString &string) {
    rep = new char[string.size() + 1];
    strcpy(rep, string.rep);
}

OCFString::OCFString(const char *string) {
    int length = strlen(string) + 1;
    rep = new char[length];
}

int OCFString::size() const {
    return strlen(rep);
}

OCFString& OCFString::operator=(const OCFString &string) {
    if(rep != string.rep) {
        delete[] rep;
        int length = string.size() + 1;
        rep = new char[length];
        strcpy(rep, string.rep);
    }
    return *this;
}

std::ostream& operator<<(std::ostream& os, const OCFString& string) {
    os << string.rep;
    return os;
}

OCFString::~OCFString() {
    delete[] rep;
}