#pragma once

class MyCout
{
public:

    MyCout& operator <<(int x);
};

extern MyCout mycout;
