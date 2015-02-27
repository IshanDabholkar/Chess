#ifndef __SQUARE__
#define __SQUARE__

class Square
{
public:
	Square(int x, int y) : xPosition(x), yPosition(y)
	{}

	int getX();
	int getY();
	void setX();
	void setY();
private:
	int xPosition;
	int yPosition;
	int color;
};



#endif
