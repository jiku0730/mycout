#include "mycout.hpp"
#include <cstdio>

int main()
{
    mycout << 0;
    std::putchar('\n');

    mycout << 123;
    std::putchar('\n');

    mycout << -456;
    std::putchar('\n');

    mycout << 2147483647;
    std::putchar('\n');

    mycout << 1 << 2 << 3;
    std::putchar('\n');
}
