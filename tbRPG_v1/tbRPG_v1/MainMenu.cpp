#include "MainMenu.h"

void MainMenu::afisare()
{
	std::cout << "\n		MAIN MENU		\n\n -press S to select- \n\n";
	std::cout << "      > START			\n";
	std::cout << "		- EXIT			\r\x1B[6C";
}

void MainMenu::choose()
{
	switch (selection)
	{
	case 0:
		std::cout << "\n\n		THERE IS NO GAME		\n";
		break;
	case 1:
		std::cout << "\n		GOOD RIDDANCE		\n";
		exit(0);
		break;
	default:
		break;
	}
}

void MainMenu::up()
{
	if (selection)
	{
		selection--;
		std::cout << "\x1B[1A[0K" << ">" << "\x1B[1D";
	}
}

void MainMenu::down()
{
	if (!selection)
	{
		selection++;
		std::cout << "\x1B[1B[0K" << ">" << "\x1B[1D";
	}
}

