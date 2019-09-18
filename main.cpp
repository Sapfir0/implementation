#include <iostream>
#include "string.h"



int main() {
    string helloWorld = "hello world";
    printf("%s \n", helloWorld);
    printf("%c \n", helloWorld[6]);
    std::cout << helloWorld << " " << helloWorld.strlen();

    return 0;
}

