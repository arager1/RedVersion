#ifndef ENGINE_REDVERSION_HPP
#define ENGINE_REDVERSION_HPP

#include "AbstractGame.hpp"
#include "PointerLogic.hpp"

// TEMP
#include <iostream>
#include <memory>

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
	virtual ~ConsoleGame() override = default;

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

std::unique_ptr<AbstractGame> makeConsoleGame()
{
	return IntegralMath::PointerLogic::makeUnique<ConsoleGame>();
}



} // namespace Engine

#endif // ENGINE_REDVERSION_HPP