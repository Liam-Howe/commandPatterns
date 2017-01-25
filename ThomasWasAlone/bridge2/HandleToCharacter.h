#pragma once
#include <iostream>
#include "Character2.h"
using namespace std;
class HandleToCharacter
{
public:
	HandleToCharacter() : character(new Character2()) {}
	Character2* operator->() { return character; }
private:
	Character2* character;

};