#include <iostream>
#include "string.h"



int main() {
    string helloWorld = "hello world";
    string sanya = "sanya";
    //printf("%s \n", helloWorld);
    //printf("%c \n", helloWorld[0]);
    helloWorld.append(sanya);
    printf("%s \n", helloWorld);

    //printf("%s \n", helloWorld.append('s'));
    //printf("%s \n", helloWorld + sanya);

    //std::cout << helloWorld;

    return 0;
}

