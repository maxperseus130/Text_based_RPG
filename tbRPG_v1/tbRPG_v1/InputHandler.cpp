#include "InputHandler.h"

InputHandler::InputHandler()
{
	up_ = new UpCommand;
	down_ = new DownCommand;
	choose_ = new ChooseCommand;
}

InputHandler::~InputHandler()
{
	delete up_;
	delete down_;
}

bool InputHandler::isPressed(int c)
{
	if (c = _getch())
		return true;
	return false;
}

Command* InputHandler::handleInput()
{
	if (isPressed(KEY_UP)) return up_;
	if (isPressed(KEY_DOWN)) return down_;
	if (isPressed(SELECT)) return choose_;

	return nullptr;
}