#ifndef ENGINE_CONSOLEGAME_HPP
#define ENGINE_CONSOLEGAME_HPP

#include "AbstractGame.hpp"

// TEMP
#include <iostream>

namespace Engine
{



class ConsoleGame : public AbstractGame
{
public:
	ConsoleGame() = default;
	ConsoleGame(const ConsoleGame&) = default;
	ConsoleGame(ConsoleGame&&) = default;
	ConsoleGame& operator=(const ConsoleGame&) = default;
	ConsoleGame& operator=(ConsoleGame&&) = default;
	virtual ~ConsoleGame() = default;

	void init() override
	{
		std::cout << "Initializing game" << std::endl;
	}

	Status run() override
	{
		if (m_count < 10)
		{
			std::cout << "Game cycle: " << m_count << std::endl;
			m_count++;
			return Status::Ok;
		}
		else
		{
			return Status::Quit;
		}

	}

private:
	int m_count{0};
};



} // namespace Engine

#endif // ENGINE_CONSOLEGAME_HPP