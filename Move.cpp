#include <iostream>
#include <string>

using namespace std;
class Move
{
	double x;
	double y;
public:
	Move(double a = 0, double b = 0) { x = a; y = b; } // sets x, y to a, b
	void showmove() { cout << x << " " << y << endl; } // shows current x, y values
	Move add(const Move & m)
	{
		double xn= this->x +=m.x ;   
		double yn= this->y +=m.y ;
		return Move(xn, yn);
	}
	void reset(double a = 0, double b = 0) { x = a; y = b; } // resets x,y to a, b
};

int main()
{
	Move one(5,12.5);
	Move two(0,2.50);

	Move three =one.add(two);
	cout<<"Move Three (one+two) :" <<endl;
	three.showmove();

	cout << "Reset Move Three :" << endl;
	three.reset();
	three.showmove();

	return 0;
}