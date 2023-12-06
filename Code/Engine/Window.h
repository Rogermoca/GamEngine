#pragma once
#include "Types.h"
//Roger

class window {
public:
	void activate();
	void createWindow();
	void destroy();
	void createobject(gameObject2D go);
	SDL_Window* window;
};
