//Global Header
#include <iostream>
#include <string>
#include <cstring>

//Local Header
#include "./../include/cli.h"

namespace CLI {
    int scan_int(const char* args,int argc,char* argv[]){
        int data = 0;
        for(int i = 1; i < argc; ++i){
            if(std::strcmp(argv[i], args) == 0 && i + 1 < argc){
                data = std::stoi(argv[i + 1]);
            }
        }

        return data;
    }
}