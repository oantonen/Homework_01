#include <iostream>

class Move
{
private:
    double x;
    double y;
public:
    Move(double a = 0, double b = 0) : x(a), y(b) {} // sets x, y to a, b
    void	showmove() const                   // shows current x, y values
    {
    	std::cout << "x: " << x << ", " << "y: " << y << std::endl;
    }
    
    double getX() const { return x; }
    
    double getY() const { return y; }

    Move add(const Move & m) const
    {
    	double xRet = this->x + m.getX();
    	double yRet = this->y + m.getY();
    	return {xRet, yRet};
    }
// this function adds x of m to x of invoking object to get new x,
// adds y of m to y of invoking object to get new y, creates a new
// move object initialized to new x, y values and returns it
    void reset(double a = 0, double b = 0)  // resets x,y to a, b
    {
    	x = a;
    	y = b;
    }
};

int main()
{
	Move A{5.5, 10.1};
	A.showmove();

	Move B = A.add({0.5, 0.9});
	std::cout << "Addition operation is invoked: B + A. Result is: " << std::endl;
	B.showmove();

	std::cout << "Reset operation is invoked on object B. B now is:" << std::endl;
	B.reset(-0.42);
	B.showmove();
	return 0;
}