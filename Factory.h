#ifndef __FACTORY__
#define __FACTORY__


#include<vector>
#include"Pieces.h"



class Factory
{
public:
	inline	 std::shared_ptr<Pieces> createPieces(std::string name, int color, int x, int y)
	{
		if (name == "R")
		{
			std::shared_ptr<Pieces>p(new Rook(name, color, x, y));
			return p;
		}
		else if (name == "N")
		{
			std::shared_ptr<Pieces>p(new Knight(name, color, x, y));
			return p;
		}
		else if (name == "B")
		{
			std::shared_ptr<Pieces>p(new Bishop(name, color, x, y));
			return p;
		}
		else if (name == "K")
		{
			std::shared_ptr<Pieces>p(new Knight(name, color, x, y));
			return p;
		}
		else if (name == "Q")
		{
			std::shared_ptr<Pieces>p(new Queen(name, color, x, y));
			return p;
		}
		else if (name == "P")
		{
			std::shared_ptr<Pieces>p(new Pawn(name, color, x, y));
			return p;
		}

	}

};


#endif
