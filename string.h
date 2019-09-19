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
        string();
        string(const char* str);
        const char operator[](int pointer);
        string operator+=(string str);
        string operator+=(const char* character);
        uint8_t size();

        friend std::ostream& operator<<(std::ostream& os, string str) {
            int counter = 0;
            for(int i=0; i< str.length; i++ ) {
                os << str.data[i];
            }
            return os;
        }

        string append(const char character) {
//            string newString = *new string;
//            newString.data = data + character;
//            return newString;
        }

        string append(string rightStr) {
            string newString = *new string;
            newString.length = this->length + rightStr.length;
            newString.data = new char[newString.length];

            for(int i=0; i<this->length; i++) {
                newString.data[i] = this->data[i];
            }

            for(int i=this->length+1; i<newString.length; i++) {
                newString.data[i] = rightStr.data[i];
            }

            return newString;
        }



        string operator()(int start, int end) {
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




    private:
        char* data;
        uint32_t length;

        string(uint8_t length) {
            string* newString = (string*)malloc(sizeof(string));
        }

};


#endif //IMPLEMENTATION_STRING_H
