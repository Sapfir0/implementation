//
// Created by Sapfir on 17.09.2019.
//

#include "string.h"

string::string() {
    data = "";
    length = 0;
}

string::string(const char* str)  {
    data = str;
    length = strlen(str);
}

uint8_t string::size() {
    length = 0;
    while(strcmp(data, "\0")) {
        length++;
        *data++;
    }
    return length;
}

const char string::operator[](int pointer) {
    uint8_t currentPosition = 0;
    while(strcmp(data, "\0")) {
        if(currentPosition == pointer) {
            return *data;
        }
        *data++;
        currentPosition++;
    }
}

string string::operator+=(string str) {

}

string string::operator+=(const char* character) {

}