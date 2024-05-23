#include <iostream>
#include "includes/cli.h"

int main(int argc, char* argv[]){

    std::string name = CLI::scan_string("-name",argc,argv);

    int age = CLI::scan_int("-age",argc,argv);

    std::cout << "Hi " << name << " your age is " << age;

    return 0;
}