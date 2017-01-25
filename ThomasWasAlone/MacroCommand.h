#pragma once
#include "Command.h"
#include <vector>
class MacroCommand : public Command
{
public:
	MacroCommand() {};
	virtual ~MacroCommand() {};
	virtual void add(Command*);
	virtual void remove(Command*);
	void undo();
	virtual void execute();

private:
	//std::list<Command*>* commands;
	std::vector<Command*> commands;
};

