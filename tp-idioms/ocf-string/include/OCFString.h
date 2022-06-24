#ifndef OCFSTRING_H
#define OCFSTRING_H
#include <iostream>
#include <cstring>
class OCFString {
    public:
        OCFString();
        OCFString(const OCFString&);
        OCFString(const char *);
        OCFString& operator=(const OCFString&);
        int size() const;
        ~OCFString();

    friend std::ostream& operator<<(std::ostream& os, const OCFString& string);

    private:
        char *rep;
};
#endif