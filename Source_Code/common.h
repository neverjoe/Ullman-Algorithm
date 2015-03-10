// Ubuntu 14.04LTS X86_64 g++4.8.2

// Vim && Sublime Text 3 

// Completed at 2014.1.8

// Any bugs,please send a email to tq0317@gmail.com.
// 
#ifndef COMMON_H

#define COMMON_H
#include <string>
#include <vector>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <stdint.h>

typedef std::vector<std::vector<std::string> > Buffer;

enum UllmanReturnCode
{
    ULLMAN_SUCCESS,
    ULLMAN_WARNING,
    ULLMAN_ERROR,
    ULLMAN_NCOUNT
};

#endif
