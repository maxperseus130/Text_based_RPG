#pragma once
#include "Menu.h"

class MainMenu : public Menu
{
public:
	virtual void afisare();

	virtual void choose();

	virtual void up();

	virtual void down();
};

