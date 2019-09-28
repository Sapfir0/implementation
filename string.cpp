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
    this->append(str);
    return *this;
}


void string::append(string rightStr) {
    char* backupData = data;
    data = new char[length+rightStr.length+1];

    for(size_type i=0; i < length; i++) {
        data[i] = backupData[i];
    }

    for(size_type i=0; i < rightStr.length; i++) {
        data[length+i] = rightStr.data[i];
    }
    length += rightStr.length;
    data[length] = '\0';
}


string string::operator+(string str) {
    string newString;
    newString = *this;
    newString += str;
    return newString;
}



