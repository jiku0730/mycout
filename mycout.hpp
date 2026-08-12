#pragma once

class MyCout
{
public:

    MyCout& operator <<(int x);

    MyCout& operator <<(char x);

    MyCout& operator <<(double x);
};

extern MyCout mycout;
