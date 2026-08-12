#pragma once

class MyCout
{
public:

    MyCout& operator <<(int x);

    MyCout& operator <<(char x);

    MyCout& operator <<(double x);

    MyCout& operator <<(const char* s);
};

extern MyCout mycout;
