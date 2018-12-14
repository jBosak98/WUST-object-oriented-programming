#ifndef POINT_HEADER
#define POINT_HEADER

class Point{
public:

	Point();

	Point(int x, int y);
	
	int getX();
	
	int getY();

private:
	int x;
	
	int y;
};


#endif