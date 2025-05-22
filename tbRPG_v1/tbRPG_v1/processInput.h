#pragma once

#include "tbRPG.h"
#include "InputHandler.h"

void processInput(Menu& menu)
{
	InputHandler inputHandler;
	Command* command = inputHandler.handleInput();
	if (command)
	{
		command->select(menu);
	}
}