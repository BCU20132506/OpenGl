#include "GameEngine.h"
#include <iostream>

namespace GE {

	GameEngine::GameEngine() {

	}

	GameEngine::~GameEngine() {

	}

	bool GameEngine::init() {
		if (SDL_Init(SDL_INIT_VIDEO) < 0) {
			std::cerr << "Unable to initialise SDL! SDL error:" << SDL_GetError() << std::endl;

			return false;
		}

		SDL_GL_SetAttribute(SDL_GL_CONTEXT_MAJOR_VERSION, 3);
		SDL_GL_SetAttribute(SDL_GL_CONTEXT_MINOR_VERSION, 1);
		SDL_GL_SetAttribute(SDL_GL_CONTEXT_PROFILE_MASK, SDL_GL_CONTEXT_PROFILE_CORE);
	}
}