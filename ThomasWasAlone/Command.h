#pragma once
#include <iostream>
using namespace std;
class Command
{

public:

	virtual ~Command(){}
	virtual void execute() = 0;
	//virtual void undo() = 0;
protected:

	Command(){}

};


class MoveUpCommand : public Command
{
public:
	virtual void execute()override
	{
		cout << "Move Up" << endl;
	}
};

class MoveRightCommand : public Command
{
public:
	virtual void execute()override
	{
		cout << "Move Right" << endl;
	}
};

class MoveDownCommand : public Command
{
public:
	virtual void execute()override
	{
		cout << "Move Down" << endl;
	}
};

class MoveLeftCommand : public Command
{
public:
	virtual void execute() override 
	{  
		cout << "Move Left" << endl;
	}
};

class JumpCommand : public Command
{
public:
	virtual void execute() override
	{
		cout << "Jump" << endl;
	}
};

