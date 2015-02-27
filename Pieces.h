#ifndef __CHESS__
#define __CHESS__

#include<iostream>
#include<string>
#include<memory>
#include"Square.h"




class Pieces
{
public:
	
	virtual ~Pieces(){}
	virtual std::string getName() = 0;
	virtual int getColor() = 0;
	virtual  void setName(const std::string name) = 0;
	virtual  void setColor(const int c) = 0;
	virtual void r() = 0;
	
};

class Rook :public Pieces
{
public:
	inline Rook()
	{
	}
	~Rook(){}
	inline Rook(std::string n, int c, int x, int y) :name(n),color(c),sq(new Square(x,y))
	{
		
	}
	inline void r()
	{
		std::cout << "Rook called\n";
	};

	int getColor()
	{
		return color;
	}
	std::string getName()
	{
		return name;
	}

	void setName(const std::string x)
	{
		name = x;
	}
	void setColor(const int x)
	{
		color = x;
	}

private:
	std::string name;
	int color;
	std::shared_ptr<Square> sq;
	std::shared_ptr<Rook>rook;
};

class Knight :public Pieces
{
public:
	inline Knight()
	{
	}
	~Knight(){}
	inline Knight(std::string n, int c, int x, int y) :name(n), color(c), sq(new Square(x, y))
	{}
	inline void r()
	{
		std::cout << "Knight called\n";
	};

	int getColor()
	{
		return color;
	}
	std::string getName()
	{
		return name;
	}

	void setName(const std::string  x)
	{
		name = x;
	}
	void setColor(const int  x)
	{
		color = x;
	}

private:
	std::string name;
	int color;
	std::shared_ptr<Square> sq;
	std::shared_ptr<Knight>knight;
};

class Bishop :public Pieces
{
public:
	inline Bishop()
	{
	}
	~Bishop(){}
	inline Bishop(std::string n, int c, int x, int y) :name(n), color(c), sq(new Square(x, y))
	{}
	inline void r()
	{
		std::cout << "Bishop called\n";
	};

	int getColor()
	{
		return color;
	}
	std::string getName()
	{
		return name;
	}

	void setName(const std::string  x)
	{
		name = x;
	}
	void setColor(const int  x)
	{
		color = x;
	}

private:
	std::string name;
	int color;
	std::shared_ptr<Square> sq;
	std::shared_ptr<Bishop>bishop;
};//
class King :public Pieces
{
public:
	inline King()
	{
	}
	~King(){}
	inline King(std::string n, int c, int x, int y) :name(n), color(c), sq(new Square(x, y))
	{}
	inline void r()
	{
		std::cout << "King called\n";
	};

	int getColor()
	{
		return color;
	}
	std::string getName()
	{
		return name;
	}

	void setName(const std::string  x)
	{
		name = x;
	}
	void setColor(const int  x)
	{
		color = x;
	}

private:
	std::string name;
	int color;
	std::shared_ptr<Square> sq;
	std::shared_ptr<King>king;
};//
class Queen :public Pieces
{
public:
	inline Queen()
	{
	}
	~Queen(){}
	inline Queen(std::string n, int c, int x, int y) :name(n), color(c), sq(new Square(x, y))
	{}
	inline void r()
	{
		std::cout << "Queen called\n";
	};

	int getColor()
	{
		return color;
	}
	std::string getName()
	{
		return name;
	}

	void setName(const std::string  x)
	{
		name = x;
	}
	void setColor(const int  x)
	{
		color = x;
	}

private:
	std::string name;
	int color;
	std::shared_ptr<Square> sq;
	std::shared_ptr<Queen>queen;
};
class Pawn :public Pieces
{
public:
	inline Pawn()
	{
	}
	~Pawn(){}
	inline Pawn(std::string n, int c, int x, int y) :name(n), color(c), sq(new Square(x, y))
	{}
	inline void r()
	{
		std::cout << "o";
	};

	int getColor()
	{
		return color;
	}
	std::string getName()
	{
		return name;
	}

	void setName(const std::string  x)
	{
		name = x;
	}
	void setColor(const int  x)
	{
		color = x;
	}

private:
	std::string name;
	int color;
	std::shared_ptr<Square> sq;
	std::shared_ptr<Pawn>pawn;
};



#endif
