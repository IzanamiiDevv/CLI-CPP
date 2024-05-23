#pragma once

namespace CLI {
    int scan_int(const char* args,int argc,char* argv[]);
    std::string scan_string(const char* args,int argc,char* argv[]);
    float scan_float(const char* args,int argc,char* argv[]);
}