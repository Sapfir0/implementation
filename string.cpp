//
// Created by Sapfir on 17.09.2019.
//

#include "string.h"

string::string() {
    data = "";
    length = 0;
}

string::string(const char* str)  {
    data = const_cast<char *>(str);
    length = strlen(str);
}

size_type string::size() {
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
    return append(str);
}

string string::operator+=(const char* character) {

}

string string::append(const char character) {

}

string string::append(string rightStr) {
    string newString = *new string;
    newString.length = length + rightStr.length;
    newString.data = new char[newString.length];

    for(size_type i=0; i < length; i++) {
        newString.data[i] = data[i];
    }

    for(size_type i=0; i < rightStr.length; i++) {
        newString.data[length + i] = rightStr.data[i];
    }
    length = newString.length;
    return newString;
}


string string::operator()(int start, int end) {

}

string operator+(string str) {

}

