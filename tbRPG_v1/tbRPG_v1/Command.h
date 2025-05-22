#pragma once

#include "GameActor.h"
#include "Menu.h"

class Command
{
public:
	virtual ~Command() {}
	//virtual void execute(GameActor& actor) = 0; inputMode = true
	virtual void select(Menu& menu) = 0; //inputmode = false
};

class MenuCommand : public Command
{
public:
	virtual void select(Menu& menu) { menu.afisare(); }
};

class UpCommand : public Command
{
public:
	virtual void select(Menu& menu) { menu.up(); }
};

class DownCommand : public Command
{
public:
	virtual void select(Menu& menu) { menu.down(); }
};

class ChooseCommand : public Command
{
public:
	virtual void select(Menu& menu) { menu.choose(); }
};