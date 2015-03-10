// Ubuntu 14.04LTS X86_64 g++4.8.2

// Vim && Sublime Text 3 

// Completed at 2014.1.8

// Any bugs,please send a email to tq0317@gmail.com.
// 
#include "seperator.h"

namespace ullman
{
static const uint32_t MAX_LENGTH = 1024;

uint32_t Seperator::seperate(const char *file_path, Buffer &stream)
{
    char line[MAX_LENGTH];

    FILE *fp = fopen(file_path, "r+");

    if (fp == NULL)
    {
        fprintf(stderr, "error occurs when reading file %s\n", file_path);
        exit(ULLMAN_ERROR);
    }

    uint32_t ncount = 0;

    while (fgets(line, MAX_LENGTH - 1, fp) != NULL)
    {
        stream.resize(ncount + 1);
        char *pch = NULL;
        pch = strtok(line, _m_token);
        while (pch != NULL)
        {
            stream[ncount].push_back(std::string(pch));
            pch = strtok(NULL, _m_token);
        }
        ncount++;
    }

    fclose(fp);

    return ncount;
};
}//namespace ullman

