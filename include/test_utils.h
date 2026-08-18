#pragma once

#include <iostream>
#include <sstream>

class Capture
{
    std::streambuf *buffer;
    std::ostringstream output;

public:
    Capture() : buffer(std::cout.rdbuf(output.rdbuf())) {}

    ~Capture()
    {
        std::cout.rdbuf(buffer);
    }

    std::string str() const
    {
        return output.str();
    }
};
