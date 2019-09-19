//
// Created by Sapfir on 17.09.2019.
//

#ifndef IMPLEMENTATION_STRING_H
#define IMPLEMENTATION_STRING_H

#include <cstdint>
#include <cstdlib>
#include <cstdio>
#include "object.h"
#include <iostream>

using size_type = uint32_t;

class string : public object  {
    public:
        string();
        string(const char* str);
        const char operator[](int pointer);
        string operator+=(string str);
        string operator+=(const char* character);
        string operator()(int start, int end);  // почти что срез в питоне
        size_type size();
        string append(const char character);
        string append(string rightStr);
        string operator+(string str);

        friend std::ostream& operator<<(std::ostream& os, string str) {
            int counter = 0;
            for(size_type i=0; i < str.length; i++ ) {
                os << str.data[i];
            }
            return os;
        }

    private:
        char* data;
        size_type length;
};


#endif //IMPLEMENTATION_STRING_H
