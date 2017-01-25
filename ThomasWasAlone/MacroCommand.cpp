#include "stdafx.h"
#include "MacroCommand.h"

void MacroCommand::add(Command * c)
{
	commands.push_back(c);
}


void MacroCommand::remove(Command * c)
{
	std::vector<Command*>::iterator i;
	for (i = commands.begin(); i != commands.end(); )
	{
		if ((*i) == c)
		{
			i = commands.erase(i);
		}
		else
		{
			++i;
		}
	}
	

	
}
void MacroCommand::undo()
{
	
	for (std::vector<Command*>::reverse_iterator i = commands.rbegin(); i != commands.rend(); i++)
	{

		std::cout << "undo ";
		(*i)->execute();
		commands.pop_back();
		break;
	}


}
void MacroCommand::execute()
{
	std::vector<Command*>::iterator i;
	
	for (i = commands.begin(); i != commands.end(); i++)
	{
		Command *c = (*i);
		c->execute();
	}
}
