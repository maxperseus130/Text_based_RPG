// tbRPG_v1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#define MS_PER_UPDATE 4

double getCurrentTime();

void processInput();

void update();

void render(const double ratio);

int main()
{
    double previous = getCurrentTime();
    double lag = 0.0;
    while (true)
    {
        double current = getCurrentTime();
        double elapsed = current - previous;
        previous = current;
        lag += elapsed;

        processInput();

        while (lag >= MS_PER_UPDATE)
        {
            update();               //bail cand a ajuns la max iterations
            lag -= MS_PER_UPDATE;
        }

        render(lag / MS_PER_UPDATE);
                                    //trebuie sa aiba pauza explicita pt OS
    }
}

// avand in vedere ca este un joc in CMD (maxim windows API daca am timp)
// nu cred ca o sa am nevoie de mai mult de atat, mai ales daca nu implementez grafica:
// 
// while (true)
// {
//     double start = getCurrentTime();
//     processInput();
//     update();
//     render();
// 
//     Sleep(start + MS_PER_FRAME - getCurrentTime());
// }
// 
// asta are avantajul ca nu trebuie sa includ pauza explicita pt OS (cred? trebiue sa vad exact
// exact ce face Sleep (btw trebuie sa includ windows.h pt asta))
// 
// aproape sigur ca o sa salvez varianta curenta intr-un fisier separat si o folosesc pe asta
// de mai sus