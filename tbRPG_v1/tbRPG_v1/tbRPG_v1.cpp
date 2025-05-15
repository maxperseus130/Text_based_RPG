// tbRPG_v1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "tbRPG.h"

int main()
{
    while (true)
    {
        auto start = getCurrentTime();
        processInput();
        update();
        render();

        SLEEP(start + MS_PER_FRAME - getCurrentTime());
    }
}