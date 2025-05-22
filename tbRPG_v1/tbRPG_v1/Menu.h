#pragma once
#include <iostream>
#include <stdint.h>

class Menu
{
public:
	Menu()
	{
		selection = 0;
	}

	virtual void afisare() = 0;

	virtual void choose() = 0;

	virtual void up() = 0;
	
	virtual void down() = 0;

protected:
	int8_t selection;
};

