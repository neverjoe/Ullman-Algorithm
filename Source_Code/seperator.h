// Ubuntu 14.04LTS X86_64 g++4.8.2

// Vim && Sublime Text 3 

// Completed at 2014.1.8

// Any bugs,please send a email to tq0317@gmail.com.
// 
#ifndef SEPERATOR_H
#define SEPERATOR_H

#include "common.h"

namespace ullman
{

class Seperator
{
public:
    Seperator(const char *token): _m_token(token) {};

    uint32_t seperate(const char *file_path, Buffer &stream);

private:
    const char *_m_token;
};

}//namespace ullman

#endif //SEPERATOR_H
