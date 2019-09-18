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

class string : public object  {
    public:
        string(const char* str)  {
            data = str;
        }

        uint8_t size() {
            length = 0;
            while(strcmp(data, "\0")) {
                length++;
                *data++;
            }
            return length;
        }

        const char operator[](int pointer) {
            uint8_t currentPosition = 0;
            while(strcmp(data, "\0")) {
                if(currentPosition == pointer) {
                    return *data;
                }
                *data++;
                currentPosition++;
            }
        }

        friend std::ostream& operator<<(std::ostream& os, string str) {
            int counter = 0;
            printf("string is %s", str);
            for(int i=0; i< str.length; i++ ) {
                os << str.data[i];
            }
            return os;
        }


    private:
        const char* data;
        uint8_t length;
        uint8_t capacity;

};


#endif //IMPLEMENTATION_STRING_H
