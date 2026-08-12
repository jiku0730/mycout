#include "mycout.hpp"

int main()
{
    mycout << 0 << '\n';
    mycout << 123 << '\n';
    mycout << -456 << '\n';
    mycout << 2147483647 << '\n';
    mycout << 1 << 2 << 3 << '\n';

    mycout << 'A' << '\n';
    mycout << 'a' << 'b' << 'c' << '\n';
    mycout << '0' << '\n';
    mycout << ' ' << '!' << '\n';
    mycout << 'x' << 1 << 'y' << '\n';

    mycout << 3.14 << '\n';
    mycout << 0.5 << '\n';
    mycout << -2.5 << '\n';
    mycout << 100.0 << '\n';
    mycout << 1e10 << '\n';
    mycout << 1 << 0.25 << 'z' << '\n';

    mycout << "Hello, world!" << '\n';
    mycout << "" << '\n';
    mycout << "a" << "b" << "c" << '\n';
    mycout << "tab\tと改行" << '\n';
    mycout << "n = " << 42 << ", x = " << 0.5 << '\n';
}
