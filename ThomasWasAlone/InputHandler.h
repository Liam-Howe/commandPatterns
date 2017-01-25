#pragma once
#include "Command.h"
#include "SDL.h"
#include "MacroCommand.h"
class InputHandler
{
public:
	InputHandler();
	void handleInput();

private:
	Command* buttonUp;
	Command*buttonRight;
	Command* buttonDown;
	Command* buttonLeft;
	Command* buttonJump;
	Command* macroButton;
	SDL_Event e;
	MacroCommand* m_macroCommand;
};

