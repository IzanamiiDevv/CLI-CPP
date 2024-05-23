#include <iostream>
#include "includes/cli.h"

int main(int argc, char* argv[]){

    std::string name = CLI::scan_string("-name",argc,argv);

    int a = CLI::scan_int("-a",argc,argv);
    int b = CLI::scan_int("-b",argc,argv);

    int sum = a + b;

    std::cout << sum << " " << name;

    return 0;
}