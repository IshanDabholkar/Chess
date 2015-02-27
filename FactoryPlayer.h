#ifndef __FACTORYPLAYER__
#define __FACTORYPLAYER__

#include"Player.h"

class FactoryPlayer
{
public:
	inline std::shared_ptr<IPlayer> initializePlayerColor(std::string color)
	{
		if (color == "White")
		{
			std::shared_ptr<IPlayer>p(new Player1(color));
			return p;
		}
		else if (color == "Black")
		{
			std::shared_ptr<IPlayer>p(new Player1(color));
			return p;
		}
	}
};

#endif

