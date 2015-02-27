#ifndef __BOARD__
#define __BOARD__


#include"FactoryPlayer.h"
class Board
{
public:
	Board() :board(8, std::vector<int>(8))
	{
		int x;
		std::cout << "Press 1 if player 1 should be white, else press 2\n";
		std::cin >> x;
		std::string color;
		if (x == 1)
		{
			color = "White";
			std::shared_ptr<FactoryPlayer>f = std::make_unique<FactoryPlayer>();
			player1 = f->initializePlayerColor(color);
			color = "Black";
			std::shared_ptr<FactoryPlayer>f2 = std::make_unique<FactoryPlayer>();
			player2 = f2->initializePlayerColor(color);

		}
		else
		{
			color = "Black";
			std::shared_ptr<FactoryPlayer>f = std::make_unique<FactoryPlayer>();
			player1 = f->initializePlayerColor(color);
			color = "White";
			std::shared_ptr<FactoryPlayer>f2 = std::make_unique<FactoryPlayer>();
			player2 = f2->initializePlayerColor(color);
		}
	}

	void beginGame();
private:
	std::vector<std::vector<int>> board;
	std::shared_ptr<IPlayer>  player1;
	std::shared_ptr<IPlayer>  player2;
};

#endif
