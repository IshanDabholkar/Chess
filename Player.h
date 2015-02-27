#ifndef __PLAYER__
#define __PLAYER__


#include"Factory.h"

class IPlayer
{
public:
	IPlayer() :myPieces(2, std::vector<std::shared_ptr<Pieces>>(8))////0 is pieces// 1 is pawn
	{	}
protected:
	std::vector < std::vector < std::shared_ptr<Pieces> >> myPieces;
};

class Player1 :public IPlayer
{
public:

	Player1(std::string x) :IPlayer(), color(x)
	{
		std::string name;
		for (int i = 0; i < 2; i++)
		{
			for (int j = 0; j < 8; j++)
			{
				if (i == 1)
				{
					name = "P";
					std::shared_ptr<Factory>f = std::make_unique<Factory>();
					myPieces[i][j] = f->createPieces(name, 1, j, i);

				}
				else
				{
					if (j == 0 || j == 7)
					{
						name = "R";
						std::shared_ptr<Factory>f = std::make_unique<Factory>();
						myPieces[i][j] = f->createPieces(name, 1, j, i);
					}
					else if (j == 1 || j == 6)
					{
						name = "N";
						std::shared_ptr<Factory>f = std::make_unique<Factory>();
						myPieces[i][j] = f->createPieces(name, 1, j, i);
					}
					else if (j == 2 || j == 5)
					{
						name = "B";
						std::shared_ptr<Factory>f = std::make_unique<Factory>();
						myPieces[i][j] = f->createPieces(name, 1, j, i);
					}
					else if (j == 3)
					{
						name = "Q";
						std::shared_ptr<Factory>f = std::make_unique<Factory>();
						myPieces[i][j] = f->createPieces(name, 1, j, i);
					}
					else if (j == 4)
					{
						name = "K";
						std::shared_ptr<Factory>f = std::make_unique<Factory>();
						myPieces[i][j] = f->createPieces(name, 1, j, i);
					}
				}
			}
		}
	}
private:
	std::string color;
};

class Player2 :public IPlayer
{

public:
	//Player2(){}

	Player2(std::string x) :IPlayer(), color(x)
	{
		std::string name;
		for (int i = 0; i < 2; i++)
		{
			for (int j = 0; j < 8; j++)
			{
				if (i == 1)
				{

					name = "P";
					std::shared_ptr<Factory>f = std::make_unique<Factory>();
					myPieces[i][j] = f->createPieces(name, 0, j, i);

				}
				else
				{
					if (j == 0 || j == 7)
					{

						name = "R";
						std::shared_ptr<Factory>f = std::make_unique<Factory>();
						myPieces[i][j] = f->createPieces(name, 0, j, i);
					}
					else if (j == 1 || j == 6)
					{
						name = "N";
						std::shared_ptr<Factory>f = std::make_unique<Factory>();
						myPieces[i][j] = f->createPieces(name, 0, j, i);
					}
					else if (j == 2 || j == 5)
					{
						name = "B";
						std::shared_ptr<Factory>f = std::make_unique<Factory>();
						myPieces[i][j] = f->createPieces(name, 0, j, i);
					}
					else if (j == 3)
					{
						name = "Q";
						std::shared_ptr<Factory>f = std::make_unique<Factory>();
						myPieces[i][j] = f->createPieces(name, 0, j, i);
					}
					else if (j == 4)
					{
						name = "K";
						std::shared_ptr<Factory>f = std::make_unique<Factory>();
						std::shared_ptr<Pieces>p = f->createPieces(name, 0, j, i);
						myPieces[i][j] = f->createPieces(name, 0, j, i);
					}
				}
			}
		}
	}
private:
	std::string color;
};

#endif
