#pragma once
#include "Game.h"

namespace Game {
	class SpaceShooterGame : public Engine::Game
	{
	private:
		typedef Engine::Game Super;

	protected:
		std::string configFile = "game.cfg";

	public:
		SpaceShooterGame();
		~SpaceShooterGame();

		virtual void init();
		virtual void start();
		virtual void tick();
	};
}
