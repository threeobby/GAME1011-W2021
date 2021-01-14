#include <iostream>
#include <cmath>
using namespace std;

//Circle class 
class Circle
{
private:
	double radius;
public:
	void setRadius(double r)
	{
		radius = r;
	}
	double calcArea()
	{
		return 3.14 * pow(radius, 2);
	}
};

int main()
{
	Circle circle1, circle2;

	circle1.setRadius(1);
	circle2.setRadius(2.5);

	//Print Area 

	cout << "the area of circle 1 is: " << circle1.calcArea() << endl;
	cout << "the area of circle 2 is: " << circle2.calcArea() << endl;

	return 0;
}