#include <iostream>
#include <string>
using namespace std;
class Move
{
private:
	double x;
	double y;
public:
	Move(double a = 0, double b = 0); // sets x, y to a,
	 void showmove() const; // shows current x, y values
	 add(const Move & m) const;
	/* this function adds x of m to x of invoking object
	to get new x */
		// adds y of m to y of invoking object to get new y,creates a new
		// move object initialized to new x, y values and returns it
		reset(double a = 0, double b = 0); // resets x,y to a, b
};
Move:: Move(double a , double b)
{
	x = a;
	y = b;
};
Move::  showmove() const
{
	cout << x << endl;
	cout << y << endl;
};
Move::add(const Move & m)const
{
	x = x + m.x;
	y = y + m.y;
};
Move::reset(double a, double b)
{
	a = 0; b = 0;
};
