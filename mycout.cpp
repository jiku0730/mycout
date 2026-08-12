#include "mycout.hpp"
#include <cstdio>

MyCout mycout;

MyCout& MyCout::operator <<(int x)
{
    std::printf("%d", x);
    return *this;
}
