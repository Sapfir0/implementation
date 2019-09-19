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
    return append(str);
}

string string::operator+=(const char* character) {

}

string string::append(const char character) {

}

string string::append(string rightStr) {
    string newString = *new string;
    newString.length = this->length + rightStr.length;
    newString.data = new char[newString.length];

    for(int i=0; i < this->length; i++) {
        newString.data[i] = this->data[i];
    }

    for(int i=0; i < rightStr.length; i++) {
        newString.data[this->length + i] = rightStr.data[i];
    }

    return newString;
}


string string::operator()(int start, int end) {
    for(int i=0; i<start;i++) {
        *data++;
    }
    //char predicatedString[end-start];
    string temp = "";
    for(int i=start; i < end; i++) {
        //predicatedString[i] = *data;
        temp += *data;
        *data++;
    }
    return (string)"2";
}

string operator+(string str) {

}

string operator+(const char* str) {

}
