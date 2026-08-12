#include "mycout.hpp"
#include <cstdio>

MyCout mycout;

MyCout& MyCout::operator <<(int x)
{
    std::printf("%d", x);
    return *this;
}

MyCout& MyCout::operator <<(char x)
{
    std::fputc(x, stdout);
    return *this;
}

MyCout& MyCout::operator <<(double x)
{
    std::printf("%g", x);
    return *this;
}
