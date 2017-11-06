#pragma once
#include "Component.h"

namespace Engine {
	class Controller : public Component
	{
	private:

	public:
		Controller();
		~Controller();

		void move(int x, int y);

		virtual void tick() = 0;
	};
}
