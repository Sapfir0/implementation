//
// Created by Sapfir on 17.09.2019.
//

#include <cstring>
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
    char* backupData = data;
    data = new char[length+rightStr.length];

    for(size_type i=0; i < length; i++) {
        data[i] = backupData[i];
    }

    for(size_type i=0; i < rightStr.length; i++) {
        data[length+i] = rightStr.data[i];
    }
    length += rightStr.length;
    return *this;
}




string string::operator()(int start, int end) {

}

string string::operator+(string str) {
    string newString;
    newString.length = length + str.length;
    newString.data = new char[newString.length];

    for(size_type i=0; i < length; i++) {
        newString.data[i] = data[i];
    }

    for(size_type i=0; i < str.length; i++) {
        newString.data[length + i] = str.data[i];
    }
    return newString;
}



