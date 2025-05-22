// tbRPG_v1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "tbRPG.h"

int main()
{
    menu.afisare();

    while (true)
    {
        auto start = getCurrentTime();
        processInput(menu);
        //render(); pt interfata grafica

        SLEEP(start + MS_PER_FRAME - getCurrentTime());
    }
}