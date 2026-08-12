#pragma once

class MyCout
{
public:

    MyCout& operator <<(int x);

    MyCout& operator <<(char x);
};

extern MyCout mycout;
