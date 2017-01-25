#pragma once

#include <vector>
#include "Renderer.h"
#include "InputHandler.h"

/** The game objct whic manages the game loop*/
class Game
{

	Renderer renderer;

	

	unsigned int lastTime;//time of last update;
	
	bool pause;
	bool quit;

public:
	Game();
	~Game();

	bool init();
	void destroy();

	void update();
	void render();
	void loop();
	SDL_Event e;
	InputHandler m_inputHandler;
};

