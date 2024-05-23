#include <iostream>
#include "includes/cli.h"

int main(int argc, char* argv[]){

    int age = CLI::scan_int("-age",argc,argv);

    std::cout << age;

    return 0;
}