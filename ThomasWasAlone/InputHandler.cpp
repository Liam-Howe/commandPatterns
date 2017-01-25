#include "stdafx.h"
#include "InputHandler.h"
#include <iostream>

InputHandler::InputHandler()
{
	buttonLeft = new MoveLeftCommand();
	buttonRight =new   MoveRightCommand();
	buttonDown = new  MoveDownCommand();
	buttonUp = new MoveUpCommand();
	buttonJump = new JumpCommand();
	m_macroCommand = new MacroCommand();
	

}

void InputHandler::handleInput()
{
	while (SDL_PollEvent(&e) != 0)
	{

		//User presses a key
		 if (e.type == SDL_KEYDOWN)
		{
			//Select surfaces based on key press
			switch (e.key.keysym.sym)
			{
			case SDLK_UP:	
				buttonUp->execute();
				m_macroCommand->add(buttonUp);
				break;

			case SDLK_DOWN:
				buttonDown->execute();
				m_macroCommand->add(buttonDown);
				break;

			case SDLK_LEFT:
				buttonLeft->execute();
				m_macroCommand->add(buttonLeft);
				break;

			case SDLK_RIGHT:
				buttonRight->execute();
				m_macroCommand->add(buttonRight);
				break;
			case SDLK_w:
				buttonUp->execute();
				m_macroCommand->add(buttonUp);
				break;

			case SDLK_d:
				buttonRight->execute();
				m_macroCommand->add(buttonRight);
				break;

			case SDLK_s:
				buttonDown->execute();
				m_macroCommand->add(buttonDown);
				break;
			case SDLK_a:
				buttonLeft->execute();
				m_macroCommand->add(buttonLeft);
				break;
			case SDLK_m:
				buttonLeft->execute();
				buttonRight->execute();
				buttonUp->execute();
				m_macroCommand->add(buttonLeft);
				m_macroCommand->add(buttonRight);
				m_macroCommand->add(buttonUp);
				break;
			case SDLK_SPACE:
				buttonJump->execute();
				m_macroCommand->add(buttonJump);
				break;
			case SDLK_BACKSPACE:
				m_macroCommand->undo();
				break;
			}
		}
	}
}
