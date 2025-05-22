#pragma once
#include "Command.h"
#include "conio.h"

#define KEY_UP 72
#define KEY_DOWN 80
#define KEY_LEFT 75
#define KEY_RIGHT 77
#define SELECT 115

class InputHandler
{
public:
	InputHandler();

	~InputHandler();

	Command* handleInput();

	bool isPressed(int c);

private:
	Command* up_;
	Command* down_;
	Command* choose_;
};

