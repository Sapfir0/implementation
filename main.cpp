#include <iostream>
#include "string.h"



int main() {
    string helloWorld = "hello world";
    string sanya = "sanya";
    printf("%s \n", helloWorld);
    printf("%c \n", helloWorld[0]);
    printf("%s \n", helloWorld + sanya);
    helloWorld.append(sanya);
    printf("%s \n", helloWorld);
    string foo;
    foo = sanya;
    std::cout << foo;

    return 0;
}

